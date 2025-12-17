#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalCloudSaveManager.generated.h"

class UPalCloudDeleteWorldProcessor;
class UPalCloudDownloadWorldsProcessor;
class UPalCloudDumpFileListProcessor;
class UPalCloudProcessorBase;
class UPalCloudUploadWorldProcessor;

UCLASS(Blueprintable, Config=Game)
class PAL_API UPalCloudSaveManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimpleDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnFinishedDownloadWorlds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfigEnabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalCloudUploadWorldProcessor* UploadWorldProcessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalCloudDownloadWorldsProcessor* DownloadWorldsProcessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalCloudDeleteWorldProcessor* DeleteWorldProcessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalCloudDumpFileListProcessor* DumpFileListProcessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalCloudProcessorBase*> Processors;
    
public:
    UPalCloudSaveManager();

    UFUNCTION(BlueprintCallable)
    void RequestDumpFileList();
    
    UFUNCTION(BlueprintCallable)
    void RequestDownloadWorlds(bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestedDownloadOnceEver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EventOnWorldRestoredFromBackup(const FString& WorldName);
    
    UFUNCTION(BlueprintCallable)
    void EventOnWorldDeleted(const FString& WorldName);
    
    UFUNCTION(BlueprintCallable)
    void EventOnWorldAutoSaveStart();
    
    UFUNCTION(BlueprintCallable)
    void EventOnWorldAutoSaveFinished(bool bSuccess);
    
};


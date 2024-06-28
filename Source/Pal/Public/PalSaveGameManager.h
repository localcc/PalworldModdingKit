#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "SocialId.h"
#include "EPalInLoadCollectionType.h"
#include "FlagContainer.h"
#include "PalAsyncSaveProcessParallel.h"
#include "PalContainerId.h"
#include "PalDynamicItemId.h"
#include "PalInstanceID.h"
#include "PalWorldBaseInfoData.h"
#include "PalSaveGameManager.generated.h"

class IPalGamePlayerDataSaveInterface;
class UPalGamePlayerDataSaveInterface;
class IPalGameWorldDataSaveInterface;
class UPalGameWorldDataSaveInterface;
class UPalLocalWorldSaveGame;
class UPalWorldOptionSaveGame;
class UPalWorldSaveGame;

UCLASS(Blueprintable, Config=Game)
class PAL_API UPalSaveGameManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartedWorldAutoSave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartedPlayerAutoSave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartedLocalWorldAutoSave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndedWorldAutoSave, bool, IsSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndedPlayerAutoSave, bool, IsSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndedLocalWorldAutoSave, bool, IsSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartedWorldAutoSave OnStartedWorldAutoSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndedWorldAutoSave OnEndedWorldAutoSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartedLocalWorldAutoSave OnStartedLocalWorldAutoSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndedLocalWorldAutoSave OnEndedLocalWorldAutoSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartedPlayerAutoSave OnStartedPlayerAutoSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndedPlayerAutoSave OnEndedPlayerAutoSave;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLoadedWorldSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalWorldSaveGame* LoadedWorldSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLoadedLocalWorldSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalLocalWorldSaveGame* LoadedLocalWorldSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLoadedWorldOptionSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalWorldOptionSaveGame* LoadedWorldOptionSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AutoSaveWorldDataTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AutoSaveLocalWorldDataTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AutoSaveWorldDefaultName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IPalGameWorldDataSaveInterface>> GameSavers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalGamePlayerDataSaveInterface> PlayerDataSaver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAppliedPlayerSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalAsyncSaveProcessParallel WorldSaveProcess;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForceDisableAutoSave;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseBackupSaveData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NearSaveBackupNum;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinutesSaveBackupNum;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HourSaveBackupNum;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaySaveBackupNum;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalInLoadCollectionType, FFlagContainer> bIsCollectIDInLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FPalInstanceID> UsedInstanceIDSetInLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FPalContainerId> UsedContainerIDSetInLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FPalDynamicItemId> UsedDynamicItemIDSetInLoad;
    
public:
    UPalSaveGameManager();

    UFUNCTION(BlueprintCallable)
    void StartWorldDataAutoSave();
    
    UFUNCTION(BlueprintCallable)
    void StartLocalWorldDataAutoSave();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedWorldAsyncSaveGameInternal(const FString& SlotName, const int32 UserIndex, bool bSuccess, const FString& WorldName, const FString& Timestamp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidWorldSaveDirectoryName_LocalData(const FString& WorldSaveDirectoryName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidWorldSaveDirectoryName(const FString& WorldSaveDirectoryName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidWorldData(const FString& WorldName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidLocalWorldData(const FString& WorldName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadedWorldOptionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadedWorldData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadedLocalWorldData() const;
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsExistSocialId(FSocialId ID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAppliedPlayerData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetWorldNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FPalWorldBaseInfoData> GetWorldBaseInfoMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxWorldSaveDataNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorldSaveGame* GetLoadedWorldSaveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorldOptionSaveGame* GetLoadedWorldOptionSaveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalLocalWorldSaveGame* GetLoadedLocalWorldSaveData() const;
    
};


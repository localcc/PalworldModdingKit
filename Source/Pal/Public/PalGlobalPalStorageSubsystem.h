#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EPalGlobalStorageImportResult.h"
#include "PalGlobalPalStorageImportResultAdditionalData.h"
#include "PalGlobalPalStorageSaveParameter.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalGlobalPalStorageSubsystem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalGlobalPalStorageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveStorageDataDelegate, bool, bIsSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLoadStorageDataDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FImportSaveParameterDelegate, EPalGlobalStorageImportResult, Result, const FPalGlobalPalStorageImportResultAdditionalData&, AdditionalData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadStorageDataDelegate OnLoadStorageDataDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveStorageDataDelegate OnSaveStorageDataDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImportSaveParameterDelegate OnImportSaveParameterDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalGlobalPalStorageSaveParameter> SaveParameterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsLoadedData;
    
public:
    UPalGlobalPalStorageSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFirstEmptySlotIndex(int32 RootSearchIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDataIndex(const FPalInstanceID& SearchInstanceID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetData(const int32 DataIndex, FPalGlobalPalStorageSaveParameter& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllData(TArray<FPalGlobalPalStorageSaveParameter>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindData(const FPalInstanceID& SearchInstanceID, FPalGlobalPalStorageSaveParameter& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistData(const FPalInstanceID& SearchInstanceID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDuplication(const FPalIndividualCharacterSaveParameter& CheckParameter) const;
    
};


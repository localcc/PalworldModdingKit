#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalDimensionPalStorageSaveParameter.h"
#include "PalDimensionStorageControlData.h"
#include "PalDimensionStorageRestoreInfo.h"
#include "PalInstanceID.h"
#include "PalDimensionLockerControl.generated.h"

class UPalDimensionLockerControl;

UCLASS(Blueprintable)
class PAL_API UPalDimensionLockerControl : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateData, const TArray<int32>&, UpdatedDataIndexArray);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateCurrentControllingPage, const FGuid&, PlayerUId, int32, NewPageNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimeoutPlayer, const FGuid&, TimeoutPlayerUId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSortedData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSavedLockerData, UPalDimensionLockerControl*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateCurrentControllingPage OnUpdateCurrentControllingPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedLockerData OnSavedLockerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateData OnUpdateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSortedData OnSortedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeoutPlayer OnTimeoutPlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalDimensionStorageControlData> ControllingPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LockerOwnedPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDimensionPalStorageSaveParameter> LockerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, FPalDimensionStorageRestoreInfo> RestoreInfoMap;
    
public:
    UPalDimensionLockerControl();

private:
    UFUNCTION(BlueprintCallable)
    void OnRestorePalData(FPalInstanceID IndividualId);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalDimensionPalStorageSaveParameter.h"
#include "PalDimensionStoragePageReplicationData.h"
#include "PalPlayerDataPalDimensionStorage.generated.h"

class UPalDimensionLockerControl;

UCLASS(Blueprintable)
class PAL_API UPalPlayerDataPalDimensionStorage : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePageData, const TArray<FPalDimensionPalStorageSaveParameter>&, NewPageData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateCurrentPageNum, int32, NewPageNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSortedLocker);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTimeout);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRestoreData, int32, RestoredPalstorageDataIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateCurrentPageNum OnUpdateCurrentPageNum;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatePageData OnUpdatePageData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSortedLocker OnSortedLocker;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeout OnTimeoutDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRestoreData OnRestoreData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid OwnerPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentPage, meta=(AllowPrivateAccess=true))
    int32 CurrentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalDimensionLockerControl> WeakLockerControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PageData, meta=(AllowPrivateAccess=true))
    FPalDimensionStoragePageReplicationData PageReplicationData;
    
public:
    UPalPlayerDataPalDimensionStorage();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedLockerData(const TArray<int32>& UpdatedDataIndexArray);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateCurrentControllingPage(const FGuid& PlayerUId, int32 NewPageNum);
    
    UFUNCTION(BlueprintCallable)
    void OnTimeoutPlayer(const FGuid& TimeoutPlayerUId);
    
    UFUNCTION(BlueprintCallable)
    void OnSortedLockerData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PageData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPage();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetDimensionStoragePageNum(const UObject* WorldContextObject);
    
};


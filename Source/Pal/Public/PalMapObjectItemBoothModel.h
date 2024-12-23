#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalItemBoothTradeInfo.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalMapObjectItemBoothModel.generated.h"

class UPalItemContainer;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectItemBoothModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateStoreContentsDelegate, UPalItemContainer*, Container);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTradeInfoUpdatedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPrivateLockPlayerUIdUpdatedDelegate, FGuid, PlayerUId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateStoreContentsDelegate OnUpdateStoreContentsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTradeInfoUpdatedDelegate OnTradeInfoUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPrivateLockPlayerUIdUpdatedDelegate OnPrivateLockChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TargetContainer, meta=(AllowPrivateAccess=true))
    UPalItemContainer* StoreContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TradeInfos, meta=(AllowPrivateAccess=true))
    TArray<FPalItemBoothTradeInfo> TradeInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PrivateLockPlayerUId, meta=(AllowPrivateAccess=true))
    FGuid PrivateLockPlayerUId;
    
public:
    UPalMapObjectItemBoothModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RequestTrade_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestTrade(const int32 TradeIndex, const int32 GroupCount);
    
    UFUNCTION(BlueprintCallable)
    void RequestTogglePrivateLock();
    
    UFUNCTION(BlueprintCallable)
    void RequestSortStore_ServerInternal();
    
    UFUNCTION(BlueprintCallable)
    void RequestSortStore();
    
    UFUNCTION(BlueprintCallable)
    void RequestRemoveTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestRemoveTradeInfo(const int32 TradeInfoIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestPrivateLock_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateTradeInfo(const FPalItemBoothTradeInfo& TradeInfo);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeTradeInfo(const int32 TradeInfoIndex, const FPalItemBoothTradeInfo& TradeInfo);
    
    UFUNCTION(BlueprintCallable)
    void ReleasePrivateLock_ServerInternal(const int32 RequestPlayerId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateStoreContents(UPalItemContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TradeInfos();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetContainer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrivateLockPlayerUId();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedPrivateByLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTradeInfos(TArray<FPalItemBoothTradeInfo>& OutTradeInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTargetItemStock(const FName StaticItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStoreItemContainer(UPalItemContainer*& TargetContainer) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalInstanceID.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalPalBoothTradeInfo.h"
#include "PalMapObjectPalBoothModel.generated.h"

class UPalIndividualCharacterSlot;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectPalBoothModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTradeInfoUpdatedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPrivateLockPlayerUIdUpdatedDelegate, FGuid, PlayerUId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTradeInfoUpdatedDelegate OnTradeInfoUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPrivateLockPlayerUIdUpdatedDelegate OnPrivateLockChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TradeInfos, meta=(AllowPrivateAccess=true))
    TArray<FPalPalBoothTradeInfo> TradeInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PrivateLockPlayerUId, meta=(AllowPrivateAccess=true))
    FGuid PrivateLockPlayerUId;
    
public:
    UPalMapObjectPalBoothModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RequestTrade_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestTrade(const int32 TradeIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestTogglePrivateLock();
    
    UFUNCTION(BlueprintCallable)
    void RequestRemoveTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestRemoveTradeInfo(const int32 TradeInfoIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestPrivateLock_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateTradeInfo(const FPalPalBoothTradeInfo& TradeInfo);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeTradeInfo(const int32 TradeInfoIndex, const FPalPalBoothTradeInfo& TradeInfo);
    
    UFUNCTION(BlueprintCallable)
    void ReleasePrivateLock_ServerInternal(const int32 RequestPlayerId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TradeInfos();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrivateLockPlayerUId();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedPrivateByLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTradeInfos(TArray<FPalPalBoothTradeInfo>& OutTradeInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterSlot* GetBoothPalByIndividualId(const FPalInstanceID IndividualId);
    
};


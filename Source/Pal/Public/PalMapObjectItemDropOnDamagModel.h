#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectItemCollectableType.h"
#include "PalBaseCampAssignableObjectInterface.h"
#include "PalBaseCampModuleResourceCollectorTargetInterface.h"
#include "PalDamageInfo.h"
#include "PalItemAndNum.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectItemCollectableInterface.h"
#include "PalMapObjectItemDropOnDamagModel.generated.h"

class UPalMapObjectItemDropOnDamagModel;
class UPalMapObjectModel;

UCLASS(Blueprintable)
class UPalMapObjectItemDropOnDamagModel : public UPalMapObjectConcreteModelBase, public IPalMapObjectItemCollectableInterface, public IPalBaseCampAssignableObjectInterface, public IPalBaseCampModuleResourceCollectorTargetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectItemDropOnDamagModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateDetectedByPlayerDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalItemAndNum> DropItemInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBaseCampResourceCollectorTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRequireDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DetectedByPlayer, meta=(AllowPrivateAccess=true))
    bool bDetectedByPlayer;
    
public:
    UPalMapObjectItemDropOnDamagModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestMarkDetectedByPlayer_ServerInternal(const int32 PlayerId, bool bDetected);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestMarkDetectedByPlayer(const bool bDetected);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DetectedByPlayer();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDamage_ServerInternal(UPalMapObjectModel* Model, const FPalDamageInfo& DamageInfo, const int32 LastHp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDetectedByPlayer() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastMarkDetectedByPlayer_Multicast(const bool bDetected);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    EPalMapObjectItemCollectableType GetItemCollectableType() const override PURE_VIRTUAL(GetItemCollectableType, return EPalMapObjectItemCollectableType::Pickup;);
    
};


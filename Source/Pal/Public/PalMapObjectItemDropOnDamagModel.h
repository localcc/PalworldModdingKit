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

class UPalMapObjectModel;

UCLASS(Blueprintable)
class UPalMapObjectItemDropOnDamagModel : public UPalMapObjectConcreteModelBase, public IPalMapObjectItemCollectableInterface, public IPalBaseCampAssignableObjectInterface, public IPalBaseCampModuleResourceCollectorTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalItemAndNum> DropItemInfos;
    
public:
    UPalMapObjectItemDropOnDamagModel();

private:
    UFUNCTION(BlueprintCallable)
    void OnDamage_ServerInternal(UPalMapObjectModel* Model, const FPalDamageInfo& DamageInfo, const int32 LastHp);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    EPalMapObjectItemCollectableType GetItemCollectableType() const override PURE_VIRTUAL(GetItemCollectableType, return EPalMapObjectItemCollectableType::Pickup;);
    
    UFUNCTION(BlueprintCallable)
    void GetCollectableStaticItemIds(TArray<FName>& OutStaticItemIds) override PURE_VIRTUAL(GetCollectableStaticItemIds,);
    
};


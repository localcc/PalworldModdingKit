#pragma once
#include "CoreMinimal.h"
#include "EPalActionType.h"
#include "EPalMapObjectItemCollectableType.h"
#include "PalMapObjectItemCollectableInterface.h"
#include "PalMapObjectPickableItemModelBase.h"
#include "PalMapObjectPickupItemOnLevelModel.generated.h"

class UPalItemContainer;

UCLASS(Blueprintable)
class UPalMapObjectPickupItemOnLevelModel : public UPalMapObjectPickableItemModelBase, public IPalMapObjectItemCollectableInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName VisualStaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LongHoldInteractDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalActionType InteractPlayerActionType;
    
public:
    UPalMapObjectPickupItemOnLevelModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateItemContainerContents(UPalItemContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetVisualStaticItemId() const;
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    EPalMapObjectItemCollectableType GetItemCollectableType() const override PURE_VIRTUAL(GetItemCollectableType, return EPalMapObjectItemCollectableType::Pickup;);
    
    UFUNCTION(BlueprintCallable)
    void GetCollectableStaticItemIds(TArray<FName>& OutStaticItemIds) override PURE_VIRTUAL(GetCollectableStaticItemIds,);
    
};


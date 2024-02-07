#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalPlayerInventoryType.h"
#include "PalPlayerInventorySelectData.h"
#include "PalItemSelectorComponent.generated.h"

class UPalItemContainer;
class UPalItemSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalItemSelectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeSelectedIndexDelegate, EPalPlayerInventoryType, inventoryType, int32, Index);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeSelectedIndexDelegate OnChangeSelectedIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalPlayerInventoryType, FPalPlayerInventorySelectData> itemSelectDataMap;
    
public:
    UPalItemSelectorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SelectPrevItem(EPalPlayerInventoryType targetInventory);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextItem(EPalPlayerInventoryType targetInventory);
    
    UFUNCTION(BlueprintCallable)
    void SelectItem(EPalPlayerInventoryType targetInventory, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTargetInventoryType(EPalPlayerInventoryType targetInventoryType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemSlot* GetNowSelectedItemSlot(EPalPlayerInventoryType targetInventory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNowSelectedIndex(EPalPlayerInventoryType targetInventory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetContainer(EPalPlayerInventoryType targetInventory) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddTargetInventoryType(EPalPlayerInventoryType targetInventoryType);
    
};


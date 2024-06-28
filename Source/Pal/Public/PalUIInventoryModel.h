#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalItemSlotPressType.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "EPalPlayerInventoryType.h"
#include "PalContainerId.h"
#include "PalItemAndNum.h"
#include "PalItemSlotId.h"
#include "PalStaticItemIdAndNum.h"
#include "PalUIInventoryModel.generated.h"

class UPalItemContainer;
class UPalItemContainerMultiHelper;
class UPalItemSlot;

UCLASS(Blueprintable)
class UPalUIInventoryModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateContainerContentDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFinishedItemTrashDelegate, bool, Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFinishedItemDropDelegate, bool, Result);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateContainerContentDelegate OnUpdateContainerContentDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishedItemTrashDelegate OnFinishedItemTrashDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishedItemDropDelegate OnFinishedItemDropDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalItemContainerMultiHelper* InventoryContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemSlotId tmpLiftedItemSlotId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemAndNum tmpLiftedItemAndNum;
    
public:
    UPalUIInventoryModel();
    UFUNCTION(BlueprintCallable)
    void TryMoveSlotToInventory(UPalItemSlot* fromSlot, bool tryAutoEquip);
    
    UFUNCTION(BlueprintCallable)
    void TryMoveContainerToInventory(UPalItemContainer* fromContainer, bool tryAutoEquip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetInventoryContainer(const EPalPlayerInventoryType Type, UPalItemContainer*& Container) const;
    
    UFUNCTION(BlueprintCallable)
    void TryFillSlotToTargetContainerFromInventory(const FPalContainerId& ToContainerId);
    
    UFUNCTION(BlueprintCallable)
    void TryFillSlotToInventoryFromTargetContainer(const FPalContainerId& FromContainerId);
    
    UFUNCTION(BlueprintCallable)
    void TrashLiftUpItem();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SelectItemSlot(const FPalItemSlotId SlotID, const EPalItemSlotPressType PressType);
    
    UFUNCTION(BlueprintCallable)
    void ResetLiftItem();
    
    UFUNCTION(BlueprintCallable)
    void RequestSortInventory();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateContainerContent(UPalItemContainer* Container);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedTrashItemDialog(bool Result);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedTrashItemAlert(bool Result);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedDropItem(bool Result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistItems(TArray<FPalStaticItemIdAndNum> RequiredItems);
    
    UFUNCTION(BlueprintCallable)
    void DropLiftUpItem();
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLiftItemTypeB(EPalItemTypeB checkType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLiftItemTypeA(EPalItemTypeA checkType);
    
};


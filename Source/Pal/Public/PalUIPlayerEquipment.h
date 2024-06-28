#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerEquipItemSlotType.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIPlayerEquipment.generated.h"

class UPalItemSlot;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIPlayerEquipment : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIPlayerEquipment();

protected:
    UFUNCTION(BlueprintCallable)
    void SwapItemSlot(UPalItemSlot* SlotA, UPalItemSlot* SlotB);
    
    UFUNCTION(BlueprintCallable)
    void SwapEquipment(EPalPlayerEquipItemSlotType slotType, UPalItemSlot* fromSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableEquipmentHeadMeshFlag(bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemSlot(UPalItemSlot* TargetSlot, UPalItemSlot* toSlot);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEquipment(EPalPlayerEquipItemSlotType slotType, UPalItemSlot* toSlot);
    
};


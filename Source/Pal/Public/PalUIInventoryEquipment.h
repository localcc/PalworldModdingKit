#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerEquipItemSlotType.h"
#include "PalUserWidget.h"
#include "PalUIInventoryEquipment.generated.h"

class UPalItemSlot;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIInventoryEquipment : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUIInventoryEquipment();

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleHeadEquipVisible();
    
private:
    UFUNCTION(BlueprintCallable)
    void SwapItemSlot(UPalItemSlot* SlotA, UPalItemSlot* SlotB);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SwapEquipmentByLiftItem(EPalPlayerEquipItemSlotType slotType);
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdatePlayerStatusPoint(const TMap<FName, int32>& AddPointMap);
    
    UFUNCTION(BlueprintCallable)
    void QuickSortInventory();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLocalPlayerNickname(const FString& NewName);
    
};


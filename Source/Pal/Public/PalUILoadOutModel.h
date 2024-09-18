#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalItemSlotPressType.h"
#include "EPalPlayerInventoryType.h"
#include "PalItemData.h"
#include "PalItemSlotId.h"
#include "PalUILoadOutModel.generated.h"

class UPalItemContainer;

UCLASS(Blueprintable)
class UPalUILoadOutModel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPlayerInventoryType draggedTargetContainerType;
    
    UPalUILoadOutModel();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetContainer(EPalPlayerInventoryType TargetType, UPalItemContainer*& Container) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SelectItemSlot(const FPalItemSlotId SlotID, const EPalItemSlotPressType PressType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSetItem(const FPalItemData& ItemData) const;
    
};


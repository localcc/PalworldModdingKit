#pragma once
#include "CoreMinimal.h"
#include "EPalItemSlotPressType.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIRecoverPalBase.generated.h"

class UPalIndividualCharacterSlot;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIRecoverPalBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIRecoverPalBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SelectCharacterSlot(UPalIndividualCharacterSlot* TargetSlot, const EPalItemSlotPressType PressType);
    
};


#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIInventoryUseItemWindow.generated.h"

class UPalIndividualCharacterParameter;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIInventoryUseItemWindow : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIInventoryUseItemWindow();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUseReviveItem_ForClient(UPalIndividualCharacterParameter* TargetParameter);
    
};


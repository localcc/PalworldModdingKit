#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetStackableUI.h"
#include "PalUIInGameInputListener.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalUIInGameInputListener : public UPalUserWidgetStackableUI {
    GENERATED_BODY()
public:
    UPalUIInGameInputListener();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenBuildRadialMenuWithSelectedIndex(const int32 SelectedIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenBuildRadialMenu(const FName BuildObjectId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenBuildMenu(const int32 BuildObjectTypeA);
    
};


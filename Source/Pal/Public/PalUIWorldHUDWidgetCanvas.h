#pragma once
#include "CoreMinimal.h"
#include "PalUserWidget.h"
#include "PalUIWorldHUDWidgetCanvas.generated.h"

class UPalUserWidgetWorldHUD;

UCLASS(Blueprintable, EditInlineNew)
class UPalUIWorldHUDWidgetCanvas : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUIWorldHUDWidgetCanvas();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveWidget(UPalUserWidgetWorldHUD* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddWidget(UPalUserWidgetWorldHUD* Widget);
    
};


#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "PalUIHUDLayoutBase.generated.h"

class UPalUserWidget;
class UPalUserWidgetWorldHUD;

UCLASS(Blueprintable, EditInlineNew)
class UPalUIHUDLayoutBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPalUIHUDLayoutBase();
    UFUNCTION(BlueprintCallable)
    void VisibilityOverride(ESlateVisibility changedVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveWorldHUD(UPalUserWidgetWorldHUD* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveHUD(UPalUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddWorldHUD(UPalUserWidgetWorldHUD* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddHUD(UPalUserWidget* Widget, const int32 ZOrder);
    
};


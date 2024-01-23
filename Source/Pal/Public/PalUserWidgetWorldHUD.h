#pragma once
#include "CoreMinimal.h"
#include "PalUserWidget.h"
#include "PalUserWidgetWorldHUD.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPalUserWidgetWorldHUD : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUserWidgetWorldHUD();
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveSelf();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRequestRemove();
    
};


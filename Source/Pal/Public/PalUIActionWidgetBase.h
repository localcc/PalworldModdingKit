#pragma once
#include "CoreMinimal.h"
#include "CommonActionWidget.h"
#include "Styling/SlateBrush.h"
#include "PalUIActionWidgetBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalUIActionWidgetBase : public UCommonActionWidget {
    GENERATED_BODY()
public:
    UPalUIActionWidgetBase();
    UFUNCTION(BlueprintCallable)
    void OverrideImage(FSlateBrush OverrideBrush);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLocalizedDisplayText() const;
    
};


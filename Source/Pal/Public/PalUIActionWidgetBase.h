#pragma once
#include "CoreMinimal.h"
#include "CommonInputBaseTypes.h"
#include "CommonActionWidget.h"
#include "Styling/SlateBrush.h"
#include "PalUIActionBindData.h"
#include "PalUIActionWidgetBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalUIActionWidgetBase : public UCommonActionWidget {
    GENERATED_BODY()
public:
    UPalUIActionWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetActionBinding_ForBP(const FPalUIActionBindData& BindingData);
    
    UFUNCTION(BlueprintCallable)
    void OverrideInputType(ECommonInputType InputType);
    
    UFUNCTION(BlueprintCallable)
    void OverrideImage(FSlateBrush OverrideBrush);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnActionProgress(float HeldPercent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLocalizedDisplayText() const;
    
};


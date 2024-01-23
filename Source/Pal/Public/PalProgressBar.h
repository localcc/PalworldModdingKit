#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/ProgressBar.h"
#include "PalProgressBar.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalProgressBar : public UProgressBar {
    GENERATED_BODY()
public:
    UPalProgressBar();
    UFUNCTION(BlueprintCallable)
    void SetFillImage(const FSlateBrush& NewImage);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Components/CheckBox.h"
#include "PalCheckBox.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCheckBox : public UCheckBox {
    GENERATED_BODY()
public:
    UPalCheckBox();

    UFUNCTION(BlueprintCallable)
    void ToggleCheck();
    
};


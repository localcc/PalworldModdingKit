#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalActionOneShotAnimation.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class UPalActionOneShotAnimation : public UPalActionBase {
    GENERATED_BODY()
public:
    UPalActionOneShotAnimation();
    UFUNCTION(BlueprintCallable)
    void OnEndMontage(UAnimMontage* Montage, bool bInterrupted);
    
};


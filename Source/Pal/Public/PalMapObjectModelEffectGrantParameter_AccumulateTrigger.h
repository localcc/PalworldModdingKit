#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelEffectGrantParameterBase.h"
#include "PalMapObjectModelEffectGrantParameter_AccumulateTrigger.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMapObjectModelEffectGrantParameter_AccumulateTrigger : public UPalMapObjectModelEffectGrantParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPalMapObjectModelEffectGrantParameter_AccumulateTrigger();
};


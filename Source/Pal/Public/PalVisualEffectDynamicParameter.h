#pragma once
#include "CoreMinimal.h"
#include "PalVisualEffectDynamicParameterFloat.h"
#include "PalVisualEffectDynamicParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalVisualEffectDynamicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalVisualEffectDynamicParameterFloat> FloatValues;
    
    PAL_API FPalVisualEffectDynamicParameter();
};


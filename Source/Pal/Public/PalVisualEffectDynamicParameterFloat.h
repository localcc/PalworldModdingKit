#pragma once
#include "CoreMinimal.h"
#include "PalVisualEffectDynamicParameterFloat.generated.h"

USTRUCT(BlueprintType)
struct FPalVisualEffectDynamicParameterFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Value;
    
    PAL_API FPalVisualEffectDynamicParameterFloat();
};


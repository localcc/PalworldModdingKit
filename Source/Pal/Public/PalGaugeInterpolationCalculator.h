#pragma once
#include "CoreMinimal.h"
#include "PalGaugeInterpolationCalculator.generated.h"

USTRUCT(BlueprintType)
struct FPalGaugeInterpolationCalculator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirectionPositive;
    
    PAL_API FPalGaugeInterpolationCalculator();
};


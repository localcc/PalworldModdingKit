#pragma once
#include "CoreMinimal.h"
#include "EPalFoodStatusEffectType.h"
#include "PalFoodRegeneEffectParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalFoodRegeneEffectParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalFoodStatusEffectType EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Interval;
    
    PAL_API FPalFoodRegeneEffectParameter();
};


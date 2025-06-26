#pragma once
#include "CoreMinimal.h"
#include "PalFishingRodInitParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalFishingRodInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FishingMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitBarSizeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissFightAmountRate;
    
    PAL_API FPalFishingRodInitParameter();
};


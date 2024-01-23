#pragma once
#include "CoreMinimal.h"
#include "RidingAimingAnimationInfo.generated.h"

class UAimOffsetBlendSpace;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FRidingAimingAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ShootingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimOffsetBlendSpace* ShootingAO;
    
    PAL_API FRidingAimingAnimationInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "RidingAnimationInfo.generated.h"

class UAimOffsetBlendSpace;
class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FRidingAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* RidingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RidingShakingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* RideShootingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimOffsetBlendSpace* RideShootingAO;
    
    PAL_API FRidingAnimationInfo();
};


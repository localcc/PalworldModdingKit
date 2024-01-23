#pragma once
#include "CoreMinimal.h"
#include "PalPartnerSkillParameterRide.generated.h"

USTRUCT(BlueprintType)
struct FPalPartnerSkillParameterRide {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpZVelocityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
    PAL_API FPalPartnerSkillParameterRide();
};


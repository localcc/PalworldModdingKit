#pragma once
#include "CoreMinimal.h"
#include "EPalLandingType.generated.h"

UENUM(BlueprintType)
enum class EPalLandingType : uint8 {
    None,
    FootStep,
    FootStep_S,
    JumpLanding,
    RollStep_Fwd,
    RollStep_L,
    RollStep_R,
    RollStep_Bwd,
    FootStep_Index_Begin = FootStep,
    FootStep_Index_End = FootStep_S,
    JumpLanding_Index_Begin = JumpLanding,
    JumpLanding_Index_End = JumpLanding,
    RollStep_Index_Begin = RollStep_Fwd,
    RollStep_Index_End = RollStep_Bwd,
};


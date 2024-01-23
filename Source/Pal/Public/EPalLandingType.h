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
    FootStep_Index_Begin = 0x1,
    FootStep_Index_End,
    JumpLanding_Index_Begin,
    JumpLanding_Index_End = 0x3,
    RollStep_Index_Begin,
    RollStep_Index_End = 0x7,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalFishingMotionType.generated.h"

UENUM(BlueprintType)
enum class EPalFishingMotionType : uint8 {
    None,
    Fishing_Start,
    Fishing_Idle,
    Fishing_CaughtLoop,
    Fishing_End,
    Fishing_Success,
    Fishing_Fail,
};


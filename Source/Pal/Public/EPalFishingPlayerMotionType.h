#pragma once
#include "CoreMinimal.h"
#include "EPalFishingPlayerMotionType.generated.h"

UENUM(BlueprintType)
enum class EPalFishingPlayerMotionType : uint8 {
    None,
    S1,
    S2,
    M1 = 10,
    L1 = 20,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalFishBattleBehaviorType.generated.h"

UENUM(BlueprintType)
enum class EPalFishBattleBehaviorType : uint8 {
    Normal,
    Calm,
    Diver,
    Riser,
    Jitter,
};


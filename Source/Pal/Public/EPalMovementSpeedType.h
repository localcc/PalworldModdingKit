#pragma once
#include "CoreMinimal.h"
#include "EPalMovementSpeedType.generated.h"

UENUM(BlueprintType)
enum class EPalMovementSpeedType : uint8 {
    SlowWalk,
    Walk,
    Run,
    TransportMove,
};


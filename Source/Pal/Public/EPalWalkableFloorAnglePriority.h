#pragma once
#include "CoreMinimal.h"
#include "EPalWalkableFloorAnglePriority.generated.h"

UENUM(BlueprintType)
enum class EPalWalkableFloorAnglePriority : uint8 {
    None,
    Default,
    Ride,
    Action,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalBodyPartsFlagOverrideState.generated.h"

UENUM(BlueprintType)
enum class EPalBodyPartsFlagOverrideState : uint8 {
    Release,
    HighPriority,
    LowPriority,
};


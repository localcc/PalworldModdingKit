#pragma once
#include "CoreMinimal.h"
#include "EPalLeashState.generated.h"

UENUM(BlueprintType)
enum class EPalLeashState : uint8 {
    Inactive,
    PendingActivation,
    InInnerRange,
    InOuterRange,
    OutOfRange,
};


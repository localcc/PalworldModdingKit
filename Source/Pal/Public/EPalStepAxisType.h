#pragma once
#include "CoreMinimal.h"
#include "EPalStepAxisType.generated.h"

UENUM(BlueprintType)
enum class EPalStepAxisType : uint8 {
    Forward,
    Back,
    Right,
    Left,
    ForwardRight,
    ForwardLeft,
    BackRight,
    BackLeft,
};


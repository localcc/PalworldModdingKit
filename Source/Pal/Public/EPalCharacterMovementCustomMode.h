#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterMovementCustomMode.generated.h"

UENUM(BlueprintType)
enum class EPalCharacterMovementCustomMode : uint8 {
    None,
    Fatigue,
    Sprint,
    Sliding,
    Glider,
    Climbing,
    Riding,
    Rolling,
    Grappling,
};


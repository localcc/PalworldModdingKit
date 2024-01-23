#pragma once
#include "CoreMinimal.h"
#include "ECommonKeybindForcedHoldStatus.generated.h"

UENUM(BlueprintType)
enum class ECommonKeybindForcedHoldStatus : uint8 {
    NoForcedHold,
    ForcedHold,
    NeverShowHold,
};


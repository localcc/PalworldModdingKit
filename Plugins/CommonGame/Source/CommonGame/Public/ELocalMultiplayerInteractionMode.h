#pragma once
#include "CoreMinimal.h"
#include "ELocalMultiplayerInteractionMode.generated.h"

UENUM(BlueprintType)
enum class ELocalMultiplayerInteractionMode : uint8 {
    PrimaryOnly,
    SingleToggle,
    Simultaneous,
};


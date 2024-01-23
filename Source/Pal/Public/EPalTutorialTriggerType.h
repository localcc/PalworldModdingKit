#pragma once
#include "CoreMinimal.h"
#include "EPalTutorialTriggerType.generated.h"

UENUM(BlueprintType)
enum class EPalTutorialTriggerType : uint8 {
    None,
    AddItem,
    IndividualParam,
    PlayerDeath,
    Capture,
    Common,
};


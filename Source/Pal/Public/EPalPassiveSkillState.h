#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillState.generated.h"

UENUM(BlueprintType)
enum class EPalPassiveSkillState : uint8 {
    None,
    Active,
    ActivateDelay,
    Inactive,
    ActivateLocked,
};


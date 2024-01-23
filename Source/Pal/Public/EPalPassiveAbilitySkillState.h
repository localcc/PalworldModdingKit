#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveAbilitySkillState.generated.h"

UENUM(BlueprintType)
enum class EPalPassiveAbilitySkillState : uint8 {
    None,
    Active,
    ActivateDelay,
    Inactive,
    ActivateLocked,
};


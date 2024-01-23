#pragma once
#include "CoreMinimal.h"
#include "EPalPassivePartnerSkillState.generated.h"

UENUM(BlueprintType)
enum class EPalPassivePartnerSkillState : uint8 {
    None,
    Active,
    ActivateDelay,
    Inactive,
    ActivateLocked,
};


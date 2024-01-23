#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerSprintStaminaDecreaseType.generated.h"

UENUM(BlueprintType)
enum class EPalPlayerSprintStaminaDecreaseType : uint8 {
    Ignore,
    OnlyBattleMode,
    Always,
};


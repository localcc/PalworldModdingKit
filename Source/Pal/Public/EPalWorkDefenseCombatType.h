#pragma once
#include "CoreMinimal.h"
#include "EPalWorkDefenseCombatType.generated.h"

UENUM(BlueprintType)
enum class EPalWorkDefenseCombatType : uint8 {
    None,
    Wait,
    Gunner,
};


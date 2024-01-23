#pragma once
#include "CoreMinimal.h"
#include "EPalBossBattleCombatResult.generated.h"

UENUM(BlueprintType)
enum class EPalBossBattleCombatResult : uint8 {
    None,
    Won,
    TimeUp,
    AllDead,
};


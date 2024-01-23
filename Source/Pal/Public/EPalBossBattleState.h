#pragma once
#include "CoreMinimal.h"
#include "EPalBossBattleState.generated.h"

UENUM(BlueprintType)
enum class EPalBossBattleState : uint8 {
    Open,
    PreBattle,
    InBattle,
    AfterBattle,
};


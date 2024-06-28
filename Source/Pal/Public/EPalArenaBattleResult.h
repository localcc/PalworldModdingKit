#pragma once
#include "CoreMinimal.h"
#include "EPalArenaBattleResult.generated.h"

UENUM(BlueprintType)
enum class EPalArenaBattleResult : uint8 {
    None,
    Win_Player1,
    Win_Player2,
    Draw,
};


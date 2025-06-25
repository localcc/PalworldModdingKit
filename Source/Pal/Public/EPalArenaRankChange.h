#pragma once
#include "CoreMinimal.h"
#include "EPalArenaRankChange.generated.h"

UENUM(BlueprintType)
enum class EPalArenaRankChange : uint8 {
    NoChange,
    RankUp,
    RankDown,
};


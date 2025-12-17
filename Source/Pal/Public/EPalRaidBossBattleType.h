#pragma once
#include "CoreMinimal.h"
#include "EPalRaidBossBattleType.generated.h"

UENUM(BlueprintType)
enum class EPalRaidBossBattleType : uint8 {
    None,
    BaseCampDefense,
    RaidAreaBattle,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonEnemySpawnerRankType.generated.h"

UENUM(BlueprintType)
enum class EPalDungeonEnemySpawnerRankType : uint8 {
    None,
    Normal,
    Boss,
};


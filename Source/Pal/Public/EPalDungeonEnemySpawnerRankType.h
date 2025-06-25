#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonEnemySpawnerRankType.generated.h"

UENUM(BlueprintType)
enum class EPalDungeonEnemySpawnerRankType : uint8 {
    None,
    Normal,
    Normal02,
    Normal03,
    Normal04,
    Normal05,
    MidBoss,
    MidBoss02,
    MidBoss03,
    MidBoss04,
    MidBoss05,
    Boss,
    FishPal,
    NPCHuman,
    Monster,
    Monster02,
    Monster03,
    Monster04,
    Monster05,
};


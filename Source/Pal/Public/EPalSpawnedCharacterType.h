#pragma once
#include "CoreMinimal.h"
#include "EPalSpawnedCharacterType.generated.h"

UENUM(BlueprintType)
enum class EPalSpawnedCharacterType : uint8 {
    Common,
    Rare,
    FieldBoss,
    RandomDungeonBoss,
    ImprisonmentBoss,
    TowerBoss,
    RaidBoss,
};


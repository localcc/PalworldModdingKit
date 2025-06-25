#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonRewardSpawnerContentType.generated.h"

UENUM(BlueprintType)
enum class EPalDungeonRewardSpawnerContentType : uint8 {
    Empty,
    MapObjectSpawner,
    PalSpawner,
    Cage,
};


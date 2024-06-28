#pragma once
#include "CoreMinimal.h"
#include "EPalSpawnerPlacementType.generated.h"

UENUM(BlueprintType)
enum class EPalSpawnerPlacementType : uint8 {
    Field,
    FieldBoss,
    Dungeon,
    DungeonBoss,
    ImprisonmentBoss,
};


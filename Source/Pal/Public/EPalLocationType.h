#pragma once
#include "CoreMinimal.h"
#include "EPalLocationType.generated.h"

UENUM(BlueprintType)
enum class EPalLocationType : uint8 {
    Undefined,
    Point,
    PointStatic,
    PointFastTravel,
    PointBaseCamp,
    PointPlayer,
    PointMapObject,
    PointCharacter,
    PointDungeonPortal,
    PointStaticRespawn,
    PointBossTower,
    DroppedCharacter,
    DroppedChest,
    Area,
    CustomMarker,
    FieldBoss,
    SupplyMarker,
    PointDungeonGoal,
};


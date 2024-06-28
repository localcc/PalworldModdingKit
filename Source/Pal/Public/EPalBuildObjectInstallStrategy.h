#pragma once
#include "CoreMinimal.h"
#include "EPalBuildObjectInstallStrategy.generated.h"

UENUM(BlueprintType)
enum class EPalBuildObjectInstallStrategy : uint8 {
    Normal,
    WallV2,
    SinkableNormal,
    Foundation,
    Roof,
    Stairs,
    GroundWall,
    GroundWallV2,
    BaseCampPoint,
    AttachToWall,
    AttachToCeil,
    PlaceOnItemProvider,
    Pillar,
    PalStorage,
    Floor,
    Wall,
    Undefined,
};


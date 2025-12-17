#pragma once
#include "CoreMinimal.h"
#include "EPalBuildObjectInstallStrategy.generated.h"

UENUM(BlueprintType)
enum class EPalBuildObjectInstallStrategy : uint8 {
    Normal,
    WallV2,
    WallV2Tall,
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
    StandVerticalNotOverlap,
    Fence,
    TriangleFoundation,
    DiagonalWall,
    TriangleRoof,
    TriangleStairsCorner,
    SlopedRoofCorner,
    PyramidRoof,
    TriangleWall,
    TriangleWallReverse,
    PalStorage,
    Floor,
    Wall,
    Undefined,
};


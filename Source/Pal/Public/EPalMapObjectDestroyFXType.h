#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectDestroyFXType.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectDestroyFXType : uint8 {
    None,
    Normal,
    NormalWood,
    NormalRock,
    NormalMetal,
    FoliageTree,
    Pickup,
    Pickup_Wood,
    Pickup_Stone,
    Pickup_Berry,
    LowTree,
    Rock,
    FoliageTree_CherryBlossom,
    Mushroom,
    Glass,
};


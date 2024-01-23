#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectSpawnRequestType.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectSpawnRequestType : uint8 {
    MapObject,
    PlayerBuild,
};


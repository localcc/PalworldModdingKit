#pragma once
#include "CoreMinimal.h"
#include "EPalLimitVolumeFlag.generated.h"

UENUM()
enum class EPalLimitVolumeFlag : int32 {
    Build = 0x1,
    EnemySpawn,
    MapObjectSpawn = 0x4,
    BaseCampArea = 0x8,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalEnemySpawnDefaultAction.generated.h"

UENUM(BlueprintType)
enum class EPalEnemySpawnDefaultAction : uint8 {
    None,
    StopStand,
    Turn90,
    Turn180,
    PointPathWalk,
};


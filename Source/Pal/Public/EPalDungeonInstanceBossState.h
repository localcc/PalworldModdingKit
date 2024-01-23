#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonInstanceBossState.generated.h"

UENUM(BlueprintType)
enum class EPalDungeonInstanceBossState : uint8 {
    Spawned,
    Dead,
};


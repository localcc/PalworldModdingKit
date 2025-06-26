#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonGimmickSpawnedCharacterState.generated.h"

UENUM(BlueprintType)
enum class EPalDungeonGimmickSpawnedCharacterState : uint8 {
    Spawned,
    Defeated,
};


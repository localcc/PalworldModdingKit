#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampWorkerDirectionBattleType.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampWorkerDirectionBattleType : uint8 {
    AttackToEnemyInBaseCamp,
    NoBattle,
    Num,
    FirstValue = AttackToEnemyInBaseCamp,
};


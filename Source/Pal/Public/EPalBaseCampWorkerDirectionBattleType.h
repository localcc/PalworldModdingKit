#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampWorkerDirectionBattleType.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampWorkerDirectionBattleType : uint8 {
    AttackToEnemyInBaseCamp,
    NoBattle,
    Num,
    FirstValue = 0x0,
    EPalBaseCampWorkerDirectionBattleType_MAX = 0x3,
};


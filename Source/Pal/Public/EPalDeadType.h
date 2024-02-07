#pragma once
#include "CoreMinimal.h"
#include "EPalDeadType.generated.h"

UENUM(BlueprintType)
enum class EPalDeadType : uint8 {
    Undefined,
    Attack,
    SelfDestruction,
    BodyTemperature,
    Falling,
    Poison,
    Burn,
    Drown,
    TowerBossBattle,
    Ground,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalBossType.generated.h"

UENUM(BlueprintType)
enum class EPalBossType : uint8 {
    None,
    GrassBoss,
    ElectricBoss,
    ForestBoss,
    SnowBoss,
    DesertBoss,
    SakurajimaBoss,
};


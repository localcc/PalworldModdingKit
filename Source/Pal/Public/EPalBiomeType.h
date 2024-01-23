#pragma once
#include "CoreMinimal.h"
#include "EPalBiomeType.generated.h"

UENUM(BlueprintType)
enum class EPalBiomeType : uint8 {
    Undefined,
    Meadow,
    Desert,
    Coast,
    IceSnow,
    Volcano,
    CentralCity,
    SkyCityCity,
    WorldTree,
};


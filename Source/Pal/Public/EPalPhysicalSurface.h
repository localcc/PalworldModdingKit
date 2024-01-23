#pragma once
#include "CoreMinimal.h"
#include "EPalPhysicalSurface.generated.h"

UENUM(BlueprintType)
enum class EPalPhysicalSurface : uint8 {
    Default,
    Ground,
    Wood,
    Grass,
    Stone,
    Water,
    Snow,
    Lava,
};


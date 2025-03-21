#pragma once
#include "CoreMinimal.h"
#include "EPalOptionUpscalingLevel.generated.h"

UENUM(BlueprintType)
enum class EPalOptionUpscalingLevel : uint8 {
    Off,
    Auto,
    AA,
    UltraQuality,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};


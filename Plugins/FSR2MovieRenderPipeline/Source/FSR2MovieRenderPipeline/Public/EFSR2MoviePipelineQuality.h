#pragma once
#include "CoreMinimal.h"
#include "EFSR2MoviePipelineQuality.generated.h"

UENUM(BlueprintType)
enum class EFSR2MoviePipelineQuality : uint8 {
    Unused,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};


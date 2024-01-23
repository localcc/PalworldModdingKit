#pragma once
#include "CoreMinimal.h"
#include "EFSR2QualityMode.generated.h"

UENUM()
enum class EFSR2QualityMode : int32 {
    Unused,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};


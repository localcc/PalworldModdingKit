#pragma once
#include "CoreMinimal.h"
#include "EPalBuildingLimitType.generated.h"

UENUM(BlueprintType)
enum class EPalBuildingLimitType : uint8 {
    Invalid,
    VeryLow,
    Low,
    Medium,
    High,
    VeryHigh,
    NoLimit,
};


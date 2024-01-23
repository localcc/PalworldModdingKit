#pragma once
#include "CoreMinimal.h"
#include "EPalOptionGraphicsLevel.generated.h"

UENUM(BlueprintType)
enum class EPalOptionGraphicsLevel : uint8 {
    None,
    VeryLow,
    Low,
    Medium,
    High,
    VeryHigh,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalFootType.generated.h"

UENUM(BlueprintType)
enum class EPalFootType : uint8 {
    None,
    ForeFootLeft,
    ForeFootRight,
    HindFootLeft,
    HindFootRight,
    MAX,
};


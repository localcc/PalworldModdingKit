#pragma once
#include "CoreMinimal.h"
#include "EPlanarConstraint.generated.h"

UENUM(BlueprintType)
enum class EPlanarConstraint : uint8 {
    None,
    X,
    Y,
    Z,
};


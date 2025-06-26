#pragma once
#include "CoreMinimal.h"
#include "EPalActionMovementBaseType.generated.h"

UENUM(BlueprintType)
enum class EPalActionMovementBaseType : uint8 {
    Walking,
    Falling,
    Flying,
    Custom,
};


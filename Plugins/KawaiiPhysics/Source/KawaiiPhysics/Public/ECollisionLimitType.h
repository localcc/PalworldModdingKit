#pragma once
#include "CoreMinimal.h"
#include "ECollisionLimitType.generated.h"

UENUM(BlueprintType)
enum class ECollisionLimitType : uint8 {
    None,
    Spherical,
    Capsule,
    Planar,
};


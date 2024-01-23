#pragma once
#include "CoreMinimal.h"
#include "EPalBodyLocationType.generated.h"

UENUM(BlueprintType)
enum class EPalBodyLocationType : uint8 {
    None,
    Head,
    Mouth,
    BulletMuzzle,
    BodyCenter,
    JumpEffect,
};


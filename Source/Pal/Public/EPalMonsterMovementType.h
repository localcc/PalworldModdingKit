#pragma once
#include "CoreMinimal.h"
#include "EPalMonsterMovementType.generated.h"

UENUM(BlueprintType)
enum class EPalMonsterMovementType : uint8 {
    GroundOnly,
    Fly,
    FlyAndLanding,
    Swim,
    SwimGroundDamage,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalBlowVelocityOwner.generated.h"

UENUM(BlueprintType)
enum class EPalBlowVelocityOwner : uint8 {
    None,
    AttackCharacter,
    HitComponent,
    HitLocation,
};


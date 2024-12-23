#pragma once
#include "CoreMinimal.h"
#include "EPalGrapplingGunState.generated.h"

UENUM(BlueprintType)
enum class EPalGrapplingGunState : uint8 {
    Idle,
    Shooting,
    Pulling,
    Grappling,
};


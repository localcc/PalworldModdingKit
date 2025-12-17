#pragma once
#include "CoreMinimal.h"
#include "EWeaponAnimationType.generated.h"

UENUM(BlueprintType)
enum class EWeaponAnimationType : uint8 {
    None,
    PullTrigger,
    PullTrigger_Aiming,
    Aiming,
    Shoot,
    PullAltTrigger,
    PullAltReleaseTrigger,
};


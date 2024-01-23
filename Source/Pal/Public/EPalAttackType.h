#pragma once
#include "CoreMinimal.h"
#include "EPalAttackType.generated.h"

UENUM(BlueprintType)
enum class EPalAttackType : uint8 {
    Waza,
    Weapon,
    Turret,
    SlipDamage,
    Mine,
};


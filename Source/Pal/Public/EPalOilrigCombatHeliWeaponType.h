#pragma once
#include "CoreMinimal.h"
#include "EPalOilrigCombatHeliWeaponType.generated.h"

UENUM(BlueprintType)
enum class EPalOilrigCombatHeliWeaponType : uint8 {
    MachineGun,
    Missile,
    Bomb,
    MachineGun_Wide,
};


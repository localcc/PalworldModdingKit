#pragma once
#include "CoreMinimal.h"
#include "EPalItemTypeA.generated.h"

UENUM(BlueprintType)
enum class EPalItemTypeA : uint8 {
    None,
    Weapon,
    SpecialWeapon,
    Armor,
    Accessory,
    Material,
    Consume,
    Ammo,
    Food,
    Essential,
    Glider,
    MonsterEquipWeapon,
    Blueprint,
};


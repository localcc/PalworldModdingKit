#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerInventoryType.generated.h"

UENUM(BlueprintType)
enum class EPalPlayerInventoryType : uint8 {
    Common,
    DropSlot,
    Essential,
    WeaponLoadout,
    PlayerEquipArmor,
    FoodEquip,
    None,
};


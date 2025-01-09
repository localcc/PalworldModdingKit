#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillEffectTargetItemType.generated.h"

UENUM(BlueprintType)
enum class EPalPassiveSkillEffectTargetItemType : uint8 {
    None,
    Bullet,
    Dish,
    Ingot,
    Ore,
    CaptureBall,
    Glider,
    ArmorHead,
    ArmorBody,
    Weapon,
    Medicine,
    Shield,
    PalGear,
};


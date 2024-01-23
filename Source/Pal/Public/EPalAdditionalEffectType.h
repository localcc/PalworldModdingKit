#pragma once
#include "CoreMinimal.h"
#include "EPalAdditionalEffectType.generated.h"

UENUM(BlueprintType)
enum class EPalAdditionalEffectType : uint8 {
    None,
    Stun,
    Sleep,
    Poison,
    Burn,
    Wetness,
    Freeze,
    Electrical,
    Muddy,
    IvyCling,
    Darkness,
    AttackUp,
    DefenseUp,
    Recovery,
    Trap_LegHold,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalStatusID.generated.h"

UENUM(BlueprintType)
enum class EPalStatusID : uint8 {
    None,
    ControlSP,
    GainHP,
    StepCooldown,
    DrownCheck,
    Poison,
    UNKOTimer,
    Stan,
    Coma,
    Sleep,
    Overwork,
    Happiness,
    Resistance,
    Moratorium,
    Drown,
    Dying,
    ShieldRecovery,
    FallDamage,
    LavaDamage,
    Burn,
    Wetness,
    Freeze,
    Electrical,
    Muddy,
    IvyCling,
    Darkness,
    AttackUp,
    DefenseUp,
    CollectItem,
    LifeSteal,
    RaidBossStatusChange,
    RarePalEffect,
};


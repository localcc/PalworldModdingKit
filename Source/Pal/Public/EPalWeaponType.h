#pragma once
#include "CoreMinimal.h"
#include "EPalWeaponType.generated.h"

UENUM(BlueprintType)
enum class EPalWeaponType : uint8 {
    None,
    ThrowObject,
    Handgun,
    AssaultRifle,
    Shotgun,
    SniperRifle,
    RocketLauncher,
    MeleeWeapon,
    Bow,
    BowGun,
    FlameThrower,
    GatlingGun,
    Liftup,
    LaserRifle,
    MissileLauncher,
    GrenadeLauncher,
    Katana,
    MAX,
};


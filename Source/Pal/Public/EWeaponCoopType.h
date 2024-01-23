#pragma once
#include "CoreMinimal.h"
#include "EWeaponCoopType.generated.h"

UENUM(BlueprintType)
enum class EWeaponCoopType : uint8 {
    None,
    RapidFireWeapon,
    NearRangeWeapon,
    FarRangeWeapon,
    SupportWeapon,
};


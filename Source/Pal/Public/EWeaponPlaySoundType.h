#pragma once
#include "CoreMinimal.h"
#include "EWeaponPlaySoundType.generated.h"

UENUM(BlueprintType)
enum class EWeaponPlaySoundType : uint8 {
    None,
    OnStartAim,
    OnEndAim,
    OnAttach,
    OnDetach,
    OnThrow,
};


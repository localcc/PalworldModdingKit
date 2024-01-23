#pragma once
#include "CoreMinimal.h"
#include "EWeaponAnimationPoseType.generated.h"

UENUM(BlueprintType)
enum class EWeaponAnimationPoseType : uint8 {
    None,
    Stand,
    Crouch,
    Riding,
};


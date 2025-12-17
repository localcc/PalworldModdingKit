#pragma once
#include "CoreMinimal.h"
#include "EPalWeaponAnimationEndDelegateType.generated.h"

UENUM(BlueprintType)
enum class EPalWeaponAnimationEndDelegateType : uint8 {
    MontageBlendingOut,
    MontageEnded,
};


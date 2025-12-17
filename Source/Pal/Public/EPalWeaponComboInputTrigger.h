#pragma once
#include "CoreMinimal.h"
#include "EPalWeaponComboInputTrigger.generated.h"

UENUM(BlueprintType)
enum class EPalWeaponComboInputTrigger : uint8 {
    None,
    Pull,
    Release,
    Pull_Aim,
    Pull_Any,
};


#pragma once
#include "CoreMinimal.h"
#include "EWeaponNotifyType.generated.h"

UENUM(BlueprintType)
enum class EWeaponNotifyType : uint8 {
    None,
    Shoot,
    ThrowRequest,
    RequestReload,
    ShootComplated,
};


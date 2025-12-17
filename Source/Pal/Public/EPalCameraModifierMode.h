#pragma once
#include "CoreMinimal.h"
#include "EPalCameraModifierMode.generated.h"

UENUM(BlueprintType)
enum class EPalCameraModifierMode : uint8 {
    OneShot,
    Infinite,
};


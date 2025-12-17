#pragma once
#include "CoreMinimal.h"
#include "EPalCameraModifierParameterType.generated.h"

UENUM(BlueprintType)
enum class EPalCameraModifierParameterType : uint8 {
    None,
    Replace,
    Additional,
};


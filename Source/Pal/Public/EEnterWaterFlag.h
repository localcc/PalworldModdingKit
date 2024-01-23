#pragma once
#include "CoreMinimal.h"
#include "EEnterWaterFlag.generated.h"

UENUM(BlueprintType)
enum class EEnterWaterFlag : uint8 {
    None,
    OverlapWaterVolume,
    RaycastWaterPlane,
};


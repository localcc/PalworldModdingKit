#pragma once
#include "CoreMinimal.h"
#include "EPalFlyHeightType.generated.h"

UENUM(BlueprintType)
enum class EPalFlyHeightType : uint8 {
    Stop,
    ToFly,
    ToLand,
};


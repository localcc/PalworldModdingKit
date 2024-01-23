#pragma once
#include "CoreMinimal.h"
#include "EPalWorkTransformType.generated.h"

UENUM(BlueprintType)
enum class EPalWorkTransformType : uint8 {
    Undefined,
    Static,
    MapObject,
    Character,
};


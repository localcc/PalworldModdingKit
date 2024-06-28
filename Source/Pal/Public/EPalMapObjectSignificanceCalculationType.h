#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectSignificanceCalculationType.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectSignificanceCalculationType : uint8 {
    FromPlayerDistance,
    FromPlayerDistanceXY,
};


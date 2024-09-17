#pragma once
#include "CoreMinimal.h"
#include "EPalOptionMapObjectDrawDistanceType.generated.h"

UENUM(BlueprintType)
enum class EPalOptionMapObjectDrawDistanceType : uint8 {
    Invalid,
    VeryShort,
    Short,
    Normal,
    Long,
    VeryLong,
    NoLimit,
};


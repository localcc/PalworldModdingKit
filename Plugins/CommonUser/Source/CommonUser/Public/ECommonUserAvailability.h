#pragma once
#include "CoreMinimal.h"
#include "ECommonUserAvailability.generated.h"

UENUM(BlueprintType)
enum class ECommonUserAvailability : uint8 {
    Unknown,
    NowAvailable,
    PossiblyAvailable,
    CurrentlyUnavailable,
    AlwaysUnavailable,
    Invalid,
};


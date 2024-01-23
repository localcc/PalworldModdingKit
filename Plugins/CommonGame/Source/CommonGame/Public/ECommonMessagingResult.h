#pragma once
#include "CoreMinimal.h"
#include "ECommonMessagingResult.generated.h"

UENUM(BlueprintType)
enum class ECommonMessagingResult : uint8 {
    Confirmed,
    Declined,
    Cancelled,
    Killed,
    Unknown,
};


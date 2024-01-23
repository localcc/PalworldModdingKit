#pragma once
#include "CoreMinimal.h"
#include "UNISMode.generated.h"

UENUM(BlueprintType)
enum class UNISMode : uint8 {
    Off,
    UltraQuality,
    Quality,
    Balanced,
    Performance,
    Custom,
};


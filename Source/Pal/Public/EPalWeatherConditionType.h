#pragma once
#include "CoreMinimal.h"
#include "EPalWeatherConditionType.generated.h"

UENUM(BlueprintType)
enum class EPalWeatherConditionType : uint8 {
    Undefined,
    Sun,
    Cloud,
    Rain,
    Thunder,
    Snow,
    Fog,
    Storm,
    Snowstorm,
};


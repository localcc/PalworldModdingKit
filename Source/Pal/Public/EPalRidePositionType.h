#pragma once
#include "CoreMinimal.h"
#include "EPalRidePositionType.generated.h"

UENUM(BlueprintType)
enum class EPalRidePositionType : uint8 {
    None,
    HorseRide,
    BiggerHorseRide,
    SitRide,
    BackRide,
};


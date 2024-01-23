#pragma once
#include "CoreMinimal.h"
#include "EPalGeneralBlendSpaceType.generated.h"

UENUM(BlueprintType)
enum class EPalGeneralBlendSpaceType : uint8 {
    None,
    GeneralMove,
    RidingMove,
    FlyingMove,
    FlyingRidingMove,
    TransportingObjectMove,
};


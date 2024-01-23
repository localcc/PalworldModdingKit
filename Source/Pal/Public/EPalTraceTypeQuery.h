#pragma once
#include "CoreMinimal.h"
#include "EPalTraceTypeQuery.generated.h"

UENUM(BlueprintType)
enum class EPalTraceTypeQuery : uint8 {
    FluidTrace,
    ReticleRayCast,
    AISightRayCast,
    vsGroundRayCast,
    WaterPlaneRayCast,
    ClimbRayCast,
    RollingRayCast,
};


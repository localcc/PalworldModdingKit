#pragma once
#include "CoreMinimal.h"
#include "EPPSkyCreatorMoonPositionType.generated.h"

UENUM(BlueprintType)
enum EPPSkyCreatorMoonPositionType {
    MoonPositionType_Simple,
    MoonPositionType_SimpleFixedElevation,
    MoonPositionType_Real,
};


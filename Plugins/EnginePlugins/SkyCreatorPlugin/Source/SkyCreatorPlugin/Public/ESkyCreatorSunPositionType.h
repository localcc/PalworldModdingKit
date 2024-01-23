#pragma once
#include "CoreMinimal.h"
#include "ESkyCreatorSunPositionType.generated.h"

UENUM(BlueprintType)
enum ESkyCreatorSunPositionType {
    SunPositionType_Simple,
    SunPositionType_Real,
    SunPositionType_MAX UMETA(Hidden),
};


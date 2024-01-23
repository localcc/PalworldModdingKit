#pragma once
#include "CoreMinimal.h"
#include "ESkyCreatorMoonPositionType.generated.h"

UENUM(BlueprintType)
enum ESkyCreatorMoonPositionType {
    MoonPositionType_Simple,
    MoonPositionType_SimpleFixedElevation,
    MoonPositionType_Real,
    MoonPositionType_MAX UMETA(Hidden),
};


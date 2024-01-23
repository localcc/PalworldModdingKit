#pragma once
#include "CoreMinimal.h"
#include "ESkyCreatorStarMapRotationType.generated.h"

UENUM(BlueprintType)
enum ESkyCreatorStarMapRotationType {
    StarMapRotationType_NoRotation,
    StarMapRotationType_FollowSun,
    StarMapRotationType_FollowMoon,
    StarMapRotationType_MAX UMETA(Hidden),
};


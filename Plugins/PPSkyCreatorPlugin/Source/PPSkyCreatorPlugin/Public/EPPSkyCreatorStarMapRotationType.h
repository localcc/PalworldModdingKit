#pragma once
#include "CoreMinimal.h"
#include "EPPSkyCreatorStarMapRotationType.generated.h"

UENUM(BlueprintType)
enum EPPSkyCreatorStarMapRotationType {
    StarMapRotationType_NoRotation,
    StarMapRotationType_FollowSun,
    StarMapRotationType_FollowMoon,
};


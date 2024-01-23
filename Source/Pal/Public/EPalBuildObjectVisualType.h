#pragma once
#include "CoreMinimal.h"
#include "EPalBuildObjectVisualType.generated.h"

UENUM(BlueprintType)
enum class EPalBuildObjectVisualType : uint8 {
    Invisible,
    Normal,
    Simulation,
    CannotInstall,
    Building,
    BuildComplete,
    DismantleTarget,
    Damage,
    Repair,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalFarmCropState.generated.h"

UENUM(BlueprintType)
enum class EPalFarmCropState : uint8 {
    None,
    NoSelect,
    Watered,
    Growup,
    Harvestable,
    Seeding,
};


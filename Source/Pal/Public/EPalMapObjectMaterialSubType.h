#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectMaterialSubType.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectMaterialSubType : uint8 {
    None,
    Wood,
    Stone,
    Copper,
    Iron,
    Platinum,
};


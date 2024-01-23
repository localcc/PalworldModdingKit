#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterImportanceType.generated.h"

UENUM(BlueprintType)
enum class EPalCharacterImportanceType : uint8 {
    Undefined,
    AllUpdate,
    Nearest,
    Near,
    MidInSight,
    FarInSight,
    MidOutSight,
    FarOutSight,
    Farthest,
};


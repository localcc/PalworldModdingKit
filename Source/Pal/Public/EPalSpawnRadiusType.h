#pragma once
#include "CoreMinimal.h"
#include "EPalSpawnRadiusType.generated.h"

UENUM(BlueprintType)
enum class EPalSpawnRadiusType : uint8 {
    S,
    M,
    L,
    NPC,
    Override,
};


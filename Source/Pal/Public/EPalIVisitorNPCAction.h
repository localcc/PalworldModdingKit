#pragma once
#include "CoreMinimal.h"
#include "EPalIVisitorNPCAction.generated.h"

UENUM(BlueprintType)
enum class EPalIVisitorNPCAction : uint8 {
    None,
    ReturnToSpawnedPoint,
    Raid,
};


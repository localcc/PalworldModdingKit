#pragma once
#include "CoreMinimal.h"
#include "EPalActionMovementEndReplicationType.generated.h"

UENUM(BlueprintType)
enum class EPalActionMovementEndReplicationType : uint8 {
    None,
    LocalControlledOnly,
    ServerOnly,
    All,
};


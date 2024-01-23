#pragma once
#include "CoreMinimal.h"
#include "EPalWorkRepairState.generated.h"

UENUM(BlueprintType)
enum class EPalWorkRepairState : uint8 {
    None,
    PathFindByOwner,
    PathFindByConnector,
    ApproachToChest,
    ApproachToOwner,
    ApproachToConnectOwner,
    InProgress,
};


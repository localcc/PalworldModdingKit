#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampOperationResult.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampOperationResult : uint8 {
    Success,
    FailedNotFoundNetworkTransmitter,
    FailedNotFoundBaseCamp,
    FailedNotRequestedFromBaseCampPoint,
    FailedNotFoundOwnerMapObjectModel,
    FailedDismantleMapObject,
};


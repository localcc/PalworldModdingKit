#pragma once
#include "CoreMinimal.h"
#include "EPalWorkRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalWorkRequestResult : uint8 {
    Success,
    FailedNotFoundBaseCamp,
    FailedNotFoundOwnerMapObject,
    FailedNotFoundWork,
    FailedNotFoundWorkAssign,
    FailedNotFoundWorkAssignLocation,
    FailedDisableToAssignForAssignInfo,
    FailedOverflowAssignCount,
    FailedCharacterHandleMissing,
    FailedCharacterParameterMissing,
    FailedNotFoundCharacter,
    FailedNotFoundCharacterAIController,
    FailedNotMatchWorkType,
    FailedNotWorkBase,
    FailedNotSameWorker,
    FailedNotFoundNetworkTransmitter,
    FailedInvokeingInClientForServerInternalFunction,
    FailedTransportNotExistDirector,
    FailedTransportNotExistPathToMoveFor,
    UnassignTargetWork,
};


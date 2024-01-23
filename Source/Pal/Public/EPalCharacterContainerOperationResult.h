#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterContainerOperationResult.generated.h"

UENUM(BlueprintType)
enum class EPalCharacterContainerOperationResult : uint8 {
    Success,
    FailedTerminatedManager,
    FailedIssueContainerId,
    FailedOverflowSlotNum,
    FailedNotFoundContainer,
    FailedNotFoundSlot,
    FailedNotFoundCharacter,
    FailedNotFoundCharacterParameter,
    FailedIsLocalOnlyContainer,
    FailedNoContainerInfoInResponse,
    FailedNotEnoughSlotSpace,
    FailedCannotGetSlotInfo,
    FailedChangedSlotInfoRequestedOne,
    FailedCannotSetTargetHandle,
    FailedAlreadyLocked,
    FailedNotJoinedPlayer,
    FailedTransactionLocked,
    FailedSimple,
    FailedServerCode,
};


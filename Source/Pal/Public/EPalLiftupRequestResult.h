#pragma once
#include "CoreMinimal.h"
#include "EPalLiftupRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalLiftupRequestResult : uint8 {
    Success,
    FailedNotExistsTargetCharacter,
    FailedNotExistsLiftupComponent,
    FailedInvalidPlayerIdInController,
    FailedInvalidDefaultCharacterInController,
    FailedDisabledLiftup,
    FailedInvalidRequestPlayerId,
    FailedAlreadyLiftingActor,
    FailedCharacterParameter,
    FailedIndividualCharacterParameter,
    FailedAlreadyLocked,
    FailedSleeping,
};


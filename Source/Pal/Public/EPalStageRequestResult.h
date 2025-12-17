#pragma once
#include "CoreMinimal.h"
#include "EPalStageRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalStageRequestResult : uint8 {
    None,
    Success,
    FailedNotValidStage,
    FailedNotValidPlayerUId,
    FailedNotValidPlayerState,
    FailedNotValidPlayerController,
    FailedNotValidPlayerCharacter,
    FailedNotValidLoginPlayer,
    FailedNotValidNetworkPlayerComponent,
    FailedPlayerIsDead,
    FailedNotValidStageWorldSubsystem,
    FailedGetStartPointTransform,
    FailedGetReturnToFieldPointTransform,
    FailedNotValidExitParameter,
    FailedNotAllowed,
    FailedConcurrentStageLimitation,
    FailedCannotExitStageOnRespawn,
    FailedPlayerNotInStage,
};


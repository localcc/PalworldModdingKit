#pragma once
#include "CoreMinimal.h"
#include "EPalStageRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalStageRequestResult : uint8 {
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
    Success,
};


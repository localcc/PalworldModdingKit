#pragma once
#include "CoreMinimal.h"
#include "EPalLabResearchOperationResult.generated.h"

UENUM(BlueprintType)
enum class EPalLabResearchOperationResult : uint8 {
    FailedNotValidResearchId,
    FailedAlreadyResearching,
    FailedCannotConsumeMaterials,
    FailedNotCompletedRequiredResearch,
    FailedNotSameCancelResearchId,
    FailedNotValidRequestPlayerState,
    FailedNotSameGuildRequestPlayer,
    Success,
};


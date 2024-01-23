#pragma once
#include "CoreMinimal.h"
#include "EPalUIPalCharacterRankUpRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalUIPalCharacterRankUpRequestResult : uint8 {
    Success,
    FailedNotValidMapObject,
    FailedNotSetTarget,
    FailedCannotRankUp,
    FailedNotEnoughResources,
};


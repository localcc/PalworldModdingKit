#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectRankUpCharacterResult.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectRankUpCharacterResult : uint8 {
    Success,
    FailedNotValidIndividualHandle,
    FailedNotValidIndividualParameter,
    FailedNotValidPlayerState,
    FailedNotValidPlayerPalStorage,
    FailedNotExistsResourceCharacterInPalStorage,
    FailedResourcePalIsFavoritePal,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerJoinResult.generated.h"

UENUM(BlueprintType)
enum class EPalPlayerJoinResult : uint8 {
    Success,
    FailedInvalidLoginPlayerId,
    FailedInvalidLoginPlayerCharacterHandle,
    FailedDuplicateAccountCreation,
};


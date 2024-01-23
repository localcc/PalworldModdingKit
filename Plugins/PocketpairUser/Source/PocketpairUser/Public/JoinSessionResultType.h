#pragma once
#include "CoreMinimal.h"
#include "JoinSessionResultType.generated.h"

UENUM(BlueprintType)
enum class JoinSessionResultType : uint8 {
    Success,
    SessionIsFull,
    SessionDoesNotExist,
    CouldNotRetrieveAddress,
    AlreadyInSession,
    UnknownError,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectPasswordLockState.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectPasswordLockState : uint8 {
    Lock,
    Unlock,
};


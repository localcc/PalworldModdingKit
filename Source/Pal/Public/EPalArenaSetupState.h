#pragma once
#include "CoreMinimal.h"
#include "EPalArenaSetupState.generated.h"

UENUM(BlueprintType)
enum class EPalArenaSetupState : uint8 {
    None,
    Running,
    Completed,
};


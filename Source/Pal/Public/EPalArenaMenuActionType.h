#pragma once
#include "CoreMinimal.h"
#include "EPalArenaMenuActionType.generated.h"

UENUM(BlueprintType)
enum class EPalArenaMenuActionType : uint8 {
    Open,
    Close,
    Back,
    Failed,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalHUDDisplayType.generated.h"

UENUM(BlueprintType)
enum class EPalHUDDisplayType : uint8 {
    Undefined,
    DamegeReact,
    InteractOn,
    InteractOff,
};


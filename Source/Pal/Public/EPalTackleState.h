#pragma once
#include "CoreMinimal.h"
#include "EPalTackleState.generated.h"

UENUM(BlueprintType)
enum class EPalTackleState : uint8 {
    None,
    Start,
    Loop,
    End,
    Leave,
    Turning,
};


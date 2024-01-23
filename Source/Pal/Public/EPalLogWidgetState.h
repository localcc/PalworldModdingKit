#pragma once
#include "CoreMinimal.h"
#include "EPalLogWidgetState.generated.h"

UENUM(BlueprintType)
enum class EPalLogWidgetState : uint8 {
    In,
    Wait,
    Out,
    End,
};


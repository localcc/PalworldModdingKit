#pragma once
#include "CoreMinimal.h"
#include "EPalWorkTickResult.generated.h"

UENUM(BlueprintType)
enum class EPalWorkTickResult : uint8 {
    Continue,
    WaitForWorkable,
    Terminate,
};


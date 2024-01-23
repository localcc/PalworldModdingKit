#pragma once
#include "CoreMinimal.h"
#include "EPalWorkProgressState.generated.h"

UENUM(BlueprintType)
enum class EPalWorkProgressState : uint8 {
    Init,
    Workable,
    NotWorkable,
    Finish,
    Dispose,
};


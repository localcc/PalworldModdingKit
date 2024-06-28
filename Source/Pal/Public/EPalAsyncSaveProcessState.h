#pragma once
#include "CoreMinimal.h"
#include "EPalAsyncSaveProcessState.generated.h"

UENUM(BlueprintType)
enum class EPalAsyncSaveProcessState : uint8 {
    Collecting,
    CollectFailed,
    Saving,
    SaveCompleted,
    SaveFailed,
};


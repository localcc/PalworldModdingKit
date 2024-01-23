#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampWorkerDirectorState.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampWorkerDirectorState : uint8 {
    Init,
    WaitForLoadingAround,
    Active,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalGameSystemInitProcessType.generated.h"

UENUM(BlueprintType)
enum class EPalGameSystemInitProcessType : uint8 {
    Init,
    WaitForInitSystems,
    ApplyWorldSaveData,
    ApplyPlayerSaveData,
};


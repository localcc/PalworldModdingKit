#pragma once
#include "CoreMinimal.h"
#include "EPalModInstallType.generated.h"

UENUM(BlueprintType)
enum class EPalModInstallType : uint8 {
    Paks,
    Lua,
    LogicMods,
    UE4SS,
    PalSchema,
};


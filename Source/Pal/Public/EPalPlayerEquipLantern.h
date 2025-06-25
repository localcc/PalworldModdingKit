#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerEquipLantern.generated.h"

UENUM(BlueprintType)
enum class EPalPlayerEquipLantern : uint8 {
    Undefined,
    Off,
    Auto,
    Always,
};


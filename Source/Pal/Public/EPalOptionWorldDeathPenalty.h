#pragma once
#include "CoreMinimal.h"
#include "EPalOptionWorldDeathPenalty.generated.h"

UENUM(BlueprintType)
enum class EPalOptionWorldDeathPenalty : uint8 {
    None,
    Item,
    ItemAndEquipment,
    All,
};


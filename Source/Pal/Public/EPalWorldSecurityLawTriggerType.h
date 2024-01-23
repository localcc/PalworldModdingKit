#pragma once
#include "CoreMinimal.h"
#include "EPalWorldSecurityLawTriggerType.generated.h"

UENUM(BlueprintType)
enum class EPalWorldSecurityLawTriggerType : uint8 {
    Undefined,
    Item_Move,
    Character_Damaged,
    Character_Dead,
    Area_Invasion,
};


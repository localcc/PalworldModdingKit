#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerEquipItemSlotType.generated.h"

UENUM(BlueprintType)
enum class EPalPlayerEquipItemSlotType : uint8 {
    Head,
    Body,
    Accessory1,
    Accessory2,
    Shield,
    Glider,
    Max,
};


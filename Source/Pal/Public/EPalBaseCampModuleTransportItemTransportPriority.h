#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampModuleTransportItemTransportPriority.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampModuleTransportItemTransportPriority : uint8 {
    None,
    GuildChest,
    BaseCampChest,
    BaseCampChestHigh,
    Requirement,
    FoodBox,
    FoodBoxCooling,
    SpecificItemHighest,
};


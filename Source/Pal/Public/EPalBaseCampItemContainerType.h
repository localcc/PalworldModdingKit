#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampItemContainerType.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampItemContainerType : uint8 {
    Chest,
    GuildChest,
    Other,
};


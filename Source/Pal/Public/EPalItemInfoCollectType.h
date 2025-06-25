#pragma once
#include "CoreMinimal.h"
#include "EPalItemInfoCollectType.generated.h"

UENUM(BlueprintType)
enum class EPalItemInfoCollectType : uint8 {
    InventoryOnly,
    BaseCampOnly,
    Both,
};


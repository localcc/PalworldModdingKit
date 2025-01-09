#pragma once
#include "CoreMinimal.h"
#include "EPalFarmSkillFruitsPickupResult.generated.h"

UENUM(BlueprintType)
enum class EPalFarmSkillFruitsPickupResult : uint8 {
    Success,
    Failed,
    Failed_InventoryFull,
};


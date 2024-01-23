#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterContainerSortType.generated.h"

UENUM(BlueprintType)
enum class EPalCharacterContainerSortType : uint8 {
    PaldexNo_Asc,
    Level_Desc,
    ElementType,
    BossFlag,
};


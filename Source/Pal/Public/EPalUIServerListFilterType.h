#pragma once
#include "CoreMinimal.h"
#include "EPalUIServerListFilterType.generated.h"

UENUM(BlueprintType)
enum class EPalUIServerListFilterType : uint8 {
    Official,
    Community,
    History,
};


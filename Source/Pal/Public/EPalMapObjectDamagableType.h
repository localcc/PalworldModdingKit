#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectDamagableType.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectDamagableType : uint8 {
    AllRecieve,
    OtherGroup,
    NoDamage,
};


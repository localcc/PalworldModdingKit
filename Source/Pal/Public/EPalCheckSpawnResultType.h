#pragma once
#include "CoreMinimal.h"
#include "EPalCheckSpawnResultType.generated.h"

UENUM(BlueprintType)
enum class EPalCheckSpawnResultType : uint8 {
    Ignore,
    Spawn,
    Despawn,
};


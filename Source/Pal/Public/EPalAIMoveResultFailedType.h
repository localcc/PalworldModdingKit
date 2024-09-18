#pragma once
#include "CoreMinimal.h"
#include "EPalAIMoveResultFailedType.generated.h"

UENUM(BlueprintType)
enum class EPalAIMoveResultFailedType : uint8 {
    Undefined,
    PartialNavMesh,
    CannotTeleportInsteadOfMove,
};


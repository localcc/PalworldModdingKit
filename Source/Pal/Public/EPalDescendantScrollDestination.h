#pragma once
#include "CoreMinimal.h"
#include "EPalDescendantScrollDestination.generated.h"

UENUM(BlueprintType)
enum class EPalDescendantScrollDestination : uint8 {
    IntoView,
    TopOrLeft,
    Center,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalBuilderMode.generated.h"

UENUM(BlueprintType)
enum class EPalBuilderMode : uint8 {
    None,
    Building,
    Dismantling,
    Painting,
};


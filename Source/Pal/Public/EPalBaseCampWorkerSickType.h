#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampWorkerSickType.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampWorkerSickType : uint8 {
    None,
    Cold,
    Sprain,
    Bulimia,
    GastricUlcer,
    Fracture,
    Weakness,
    DepressionSprain,
    DisturbingElement,
};


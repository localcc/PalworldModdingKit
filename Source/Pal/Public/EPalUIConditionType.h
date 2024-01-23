#pragma once
#include "CoreMinimal.h"
#include "EPalUIConditionType.generated.h"

UENUM(BlueprintType)
enum class EPalUIConditionType : uint8 {
    None,
    Happy,
    Unhappy,
    MinorInjury,
    Severe,
    Dying,
    Hunger,
    Starvation,
    Cold,
    Sprain,
    Bulimia,
    GastricUlcer,
    Fracture,
    Weakness,
    DepressionSprain,
    DisturbingElement,
};


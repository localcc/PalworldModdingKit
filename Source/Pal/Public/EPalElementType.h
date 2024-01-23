#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.generated.h"

UENUM(BlueprintType)
enum class EPalElementType : uint8 {
    None,
    Normal,
    Fire,
    Water,
    Leaf,
    Electricity,
    Ice,
    Earth,
    Dark,
    Dragon,
    MAX,
};


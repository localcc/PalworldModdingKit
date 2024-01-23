#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterStatusOperationName.generated.h"

UENUM(BlueprintType)
enum class EPalCharacterStatusOperationName : uint8 {
    Undefined,
    Attack,
    Defence,
    HP,
    WorkSpeed,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterLocationType.generated.h"

UENUM(BlueprintType)
enum class EPalCharacterLocationType : uint8 {
    None,
    Normal,
    Warning,
};


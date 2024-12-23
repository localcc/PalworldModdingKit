#pragma once
#include "CoreMinimal.h"
#include "ERequestEmoteType.generated.h"

UENUM(BlueprintType)
enum class ERequestEmoteType : uint8 {
    Identical,
    Specific,
    Arbitrary,
};


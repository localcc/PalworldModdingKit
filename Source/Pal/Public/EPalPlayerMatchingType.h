#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerMatchingType.generated.h"

UENUM(BlueprintType)
enum class EPalPlayerMatchingType : uint8 {
    None,
    BossBattle,
    Arena,
};


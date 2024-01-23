#pragma once
#include "CoreMinimal.h"
#include "EPalGenusCategoryType.generated.h"

UENUM(BlueprintType)
enum class EPalGenusCategoryType : uint8 {
    None,
    Humanoid,
    FourLegged,
    Dragon,
    Fish,
    Bird,
    Monster,
    Other,
};


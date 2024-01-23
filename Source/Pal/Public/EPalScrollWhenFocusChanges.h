#pragma once
#include "CoreMinimal.h"
#include "EPalScrollWhenFocusChanges.generated.h"

UENUM(BlueprintType)
enum class EPalScrollWhenFocusChanges : uint8 {
    NoScroll,
    InstantScroll,
    AnimatedScroll,
};


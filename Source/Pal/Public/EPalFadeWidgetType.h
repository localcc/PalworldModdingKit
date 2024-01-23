#pragma once
#include "CoreMinimal.h"
#include "EPalFadeWidgetType.generated.h"

UENUM(BlueprintType)
enum class EPalFadeWidgetType : uint8 {
    Invalid,
    SimpleColor,
    Loading,
};


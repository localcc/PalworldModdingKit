#pragma once
#include "CoreMinimal.h"
#include "EPalWidgetInputMode.generated.h"

UENUM(BlueprintType)
enum class EPalWidgetInputMode : uint8 {
    Default,
    GameAndMenu,
    Game,
    Menu,
};


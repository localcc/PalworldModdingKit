#pragma once
#include "CoreMinimal.h"
#include "EPalOverlayUICancelActionType.generated.h"

UENUM(BlueprintType)
enum class EPalOverlayUICancelActionType : uint8 {
    Invalid,
    CommonCancel,
    Tab,
    Esc,
};


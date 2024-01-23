#pragma once
#include "CoreMinimal.h"
#include "EPalHUDWidgetPriority.generated.h"

UENUM(BlueprintType)
enum class EPalHUDWidgetPriority : uint8 {
    Default,
    EnemyMark,
    DamagePopUp,
    PlayerInputGuard,
    PlayerUI,
    CaptureingLoupe,
    CaptureReticle,
    InteractIndicator,
    BuildingUI,
    RadialMenu,
    GameOverUI,
    DebugInfo,
};


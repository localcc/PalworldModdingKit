#pragma once
#include "CoreMinimal.h"
#include "EPalVisualEffectID.generated.h"

UENUM(BlueprintType)
enum class EPalVisualEffectID : uint8 {
    None,
    CaptureEmissive,
    SpawnFromBallEmissive,
    ReturnToBallEmissive,
    FadeOut,
    FadeIn,
    PalOutlineFadeIn,
    PalOutlineFadeOut,
    PalBattleOutline,
    Poison,
    PowerUp,
    DeadEffect,
    FireCondition,
    WaterCondition,
    IceCondition,
    ElectricityCondition,
    EarthCondition,
    LeafCondition,
    DarkCondition,
    Swimming,
    CameraVignette,
    PalEffectFadeIn,
    PalEffectFadeOut,
    RarePal,
    FunnelStartEmissive,
    FunnelEndEmissive,
    SelfDestructEmissive,
    Mosaic,
    DebugRefresh,
};


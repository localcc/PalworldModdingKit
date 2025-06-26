#pragma once
#include "CoreMinimal.h"
#include "EPalWaterEffectType.generated.h"

UENUM(BlueprintType)
enum class EPalWaterEffectType : uint8 {
    None,
    SplashFeet,
    SplashBody,
    SwimMove,
    SwimIdle,
    WaterDive,
    WaterJump,
    WaterJump_Shallow,
    AboveWater,
    AboveWater_Idle,
};


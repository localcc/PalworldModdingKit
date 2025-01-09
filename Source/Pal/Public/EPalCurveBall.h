#pragma once
#include "CoreMinimal.h"
#include "EPalCurveBall.generated.h"

UENUM(BlueprintType)
enum class EPalCurveBall : uint8 {
    None,
    Straight001,
    Straight002,
    Straight003,
    Left001,
    Left002,
    Left003,
    LeftDown001,
    LeftDown002,
    LeftDown003,
    Right001,
    Right002,
    Right003,
    RightDown001,
    RightDown002,
    RightDown003,
    Down001,
    Down002,
    Down003,
    Homing,
};


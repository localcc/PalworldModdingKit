#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectModelConnectIndex.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectModelConnectIndex : uint8 {
    Up,
    Down,
    Left,
    Right,
    Back,
    Front,
    FrontLeft,
    FrontRight,
    BackLeft,
    BackRight,
    AnyPlace = 254,
    None,
};


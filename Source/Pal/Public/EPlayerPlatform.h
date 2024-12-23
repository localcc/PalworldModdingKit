#pragma once
#include "CoreMinimal.h"
#include "EPlayerPlatform.generated.h"

UENUM(BlueprintType)
enum class EPlayerPlatform : uint8 {
    Null,
    Epic,
    Xbox,
    PSN,
    Nintendo,
    Stadia,
    Steam,
    Google,
    GooglePlay,
    Apple,
    AppleGameKit,
    Samsung,
    Oculus,
    Tencent,
};


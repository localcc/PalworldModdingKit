#pragma once
#include "CoreMinimal.h"
#include "EPalArenaInstanceState.generated.h"

UENUM(BlueprintType)
enum class EPalArenaInstanceState : uint8 {
    Open,
    Playing,
};


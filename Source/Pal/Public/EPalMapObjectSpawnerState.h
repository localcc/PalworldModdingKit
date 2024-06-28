#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectSpawnerState.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectSpawnerState : uint8 {
    Init,
    WaitForLoadingAround,
    Active,
};


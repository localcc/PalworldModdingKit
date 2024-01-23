#pragma once
#include "CoreMinimal.h"
#include "EPalRandomIncidentSpawnerStatus.generated.h"

UENUM(BlueprintType)
enum class EPalRandomIncidentSpawnerStatus : uint8 {
    Unknown,
    Idle,
    CoolDown,
    Executing,
    WaitPlayerOutside,
};


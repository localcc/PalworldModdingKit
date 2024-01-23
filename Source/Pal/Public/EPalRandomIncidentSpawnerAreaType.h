#pragma once
#include "CoreMinimal.h"
#include "EPalRandomIncidentSpawnerAreaType.generated.h"

UENUM(BlueprintType)
enum class EPalRandomIncidentSpawnerAreaType : uint8 {
    Unknown,
    Spawn,
    Exclusion,
    Action,
    End,
};


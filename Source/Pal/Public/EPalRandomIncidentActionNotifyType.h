#pragma once
#include "CoreMinimal.h"
#include "EPalRandomIncidentActionNotifyType.generated.h"

UENUM(BlueprintType)
enum class EPalRandomIncidentActionNotifyType : uint8 {
    None,
    RestartExcludedSpawner,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalBuildProcessState.generated.h"

UENUM(BlueprintType)
enum class EPalBuildProcessState : uint8 {
    Building,
    Completed,
};


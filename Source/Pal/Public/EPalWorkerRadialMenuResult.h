#pragma once
#include "CoreMinimal.h"
#include "EPalWorkerRadialMenuResult.generated.h"

UENUM(BlueprintType)
enum class EPalWorkerRadialMenuResult : uint8 {
    Cancel,
    Feed,
    ShowDetail,
    MoveToBox,
    MoveToOtomo,
    Pet,
};


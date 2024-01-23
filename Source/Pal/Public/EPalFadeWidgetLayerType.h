#pragma once
#include "CoreMinimal.h"
#include "EPalFadeWidgetLayerType.generated.h"

UENUM(BlueprintType)
enum class EPalFadeWidgetLayerType : uint8 {
    Invalid,
    Common_Lowest,
    Common_Mid,
    Common_Highest,
    Loading,
    Loading_WorldPartition,
    Loading_SucceedRequestEnterExitStageInClient,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalUIPaldexPanelDetailType.generated.h"

UENUM(BlueprintType)
enum class EPalUIPaldexPanelDetailType : uint8 {
    None,
    NotEncount,
    Encounted,
    Captured,
};


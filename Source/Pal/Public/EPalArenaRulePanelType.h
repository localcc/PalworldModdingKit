#pragma once
#include "CoreMinimal.h"
#include "EPalArenaRulePanelType.generated.h"

UENUM(BlueprintType)
enum class EPalArenaRulePanelType : uint8 {
    Editable,
    ForConfirm,
    ViewOnly,
};


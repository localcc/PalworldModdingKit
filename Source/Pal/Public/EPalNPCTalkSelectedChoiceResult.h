#pragma once
#include "CoreMinimal.h"
#include "EPalNPCTalkSelectedChoiceResult.generated.h"

UENUM(BlueprintType)
enum class EPalNPCTalkSelectedChoiceResult : uint8 {
    ExecutedBySystem,
    RequestClose,
};


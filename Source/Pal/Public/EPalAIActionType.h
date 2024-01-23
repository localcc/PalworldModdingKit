#pragma once
#include "CoreMinimal.h"
#include "EPalAIActionType.generated.h"

UENUM(BlueprintType)
enum class EPalAIActionType : uint8 {
    None,
    Action1,
    Leave,
    Cooperation,
    Warning,
    SideMove,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterCompleteDelegatePriority.generated.h"

UENUM(BlueprintType)
enum class EPalCharacterCompleteDelegatePriority : uint8 {
    SetTrainer,
    Default,
    PostDefault,
};


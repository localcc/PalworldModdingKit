#pragma once
#include "CoreMinimal.h"
#include "EPalAIResponseType.generated.h"

UENUM(BlueprintType)
enum class EPalAIResponseType : uint8 {
    Ignore,
    Escape,
    Battle,
    Special,
};


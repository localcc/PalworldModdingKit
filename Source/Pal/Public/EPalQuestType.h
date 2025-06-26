#pragma once
#include "CoreMinimal.h"
#include "EPalQuestType.generated.h"

UENUM(BlueprintType)
enum class EPalQuestType : uint8 {
    Invalid,
    Main,
    Sub,
};


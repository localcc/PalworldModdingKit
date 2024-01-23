#pragma once
#include "CoreMinimal.h"
#include "EPalChatCategory.generated.h"

UENUM(BlueprintType)
enum class EPalChatCategory : uint8 {
    None,
    Global,
    Guild,
    Say,
};


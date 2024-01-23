#pragma once
#include "CoreMinimal.h"
#include "EPalNPCTalkSelectedChoiceCommand.generated.h"

UENUM(BlueprintType)
enum class EPalNPCTalkSelectedChoiceCommand : uint8 {
    EndTalk,
    ChangeSeqence,
    CustomFunc,
};


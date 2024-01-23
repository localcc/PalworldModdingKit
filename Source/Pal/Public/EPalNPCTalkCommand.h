#pragma once
#include "CoreMinimal.h"
#include "EPalNPCTalkCommand.generated.h"

UENUM(BlueprintType)
enum class EPalNPCTalkCommand : uint8 {
    SimpleMessages,
    ChoiceYesNo,
    CustomChoice,
    TalkerNameChange,
    CustomFunc,
    CustomFuncBranch,
};


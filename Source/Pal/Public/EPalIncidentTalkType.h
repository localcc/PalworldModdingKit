#pragma once
#include "CoreMinimal.h"
#include "EPalIncidentTalkType.generated.h"

UENUM(BlueprintType)
enum class EPalIncidentTalkType : uint8 {
    None,
    OneTalk,
    MultiTalk,
    CharacterTalk,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalArenaSequenceType.generated.h"

UENUM(BlueprintType)
enum class EPalArenaSequenceType : uint8 {
    None,
    Enter,
    PartySelect,
    PreBattle,
    InBattle,
    Result,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalBossBattleSequenceType.generated.h"

UENUM(BlueprintType)
enum class EPalBossBattleSequenceType : uint8 {
    None,
    Opening,
    Combat,
    Ending,
    Completed,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalRaidBossBattleStateType.generated.h"

UENUM(BlueprintType)
enum class EPalRaidBossBattleStateType : uint8 {
    Standy,
    Combat,
    Finished,
};


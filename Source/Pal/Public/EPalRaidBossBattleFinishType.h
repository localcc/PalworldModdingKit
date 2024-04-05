#pragma once
#include "CoreMinimal.h"
#include "EPalRaidBossBattleFinishType.generated.h"

UENUM(BlueprintType)
enum class EPalRaidBossBattleFinishType : uint8 {
    Success,
    TimeUp,
    BaseCampDestroyed,
};


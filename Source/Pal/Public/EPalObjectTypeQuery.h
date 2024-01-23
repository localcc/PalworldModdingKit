#pragma once
#include "CoreMinimal.h"
#include "EPalObjectTypeQuery.generated.h"

UENUM(BlueprintType)
enum class EPalObjectTypeQuery : uint8 {
    Water,
    Attack,
    PlayerPawn,
    Temperature,
    SystemVolume,
    LiftedupPawn,
    AroundInfoCollect,
    AttackHitOnly,
};


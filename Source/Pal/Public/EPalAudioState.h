#pragma once
#include "CoreMinimal.h"
#include "EPalAudioState.generated.h"

UENUM(BlueprintType)
enum class EPalAudioState : uint8 {
    None,
    VillageA,
    VillageB,
    BaseCamp,
    InDoor,
    BossRoom,
    Grassland,
    Forest,
    Desert,
    Mountain,
    Caution,
    Fight,
    End,
    Explore,
    Battle,
    Alive,
    Dead,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalAudioStateGroup.generated.h"

UENUM(BlueprintType)
enum class EPalAudioStateGroup : uint8 {
    InRaid,
    InExplore,
    InSpot,
    InField,
    InArena,
    InBattle,
    BattleBGM,
    SpotName,
    Biome,
    RaidState,
    ArenaState,
    Player_MainState,
    Player_BattleState,
    Player_Life,
};


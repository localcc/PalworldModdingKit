#pragma once
#include "CoreMinimal.h"
#include "EPalAudioStateGroup.generated.h"

UENUM(BlueprintType)
enum class EPalAudioStateGroup : uint8 {
    InRaid,
    InExplore,
    InSpot,
    InField,
    InBattle,
    Battle_Cute,
    Battle_Cool,
    Battle_Strong,
    Battle_Human_Common,
    Battle_Human_Villain,
    Battle_FieldBoss,
    Battle_Legend,
    Battle_TowerBoss,
    SpotName,
    Biome,
    RaidState,
    Player_MainState,
    Player_BattleState,
    Player_Life,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalBattleBGMType.generated.h"

UENUM(BlueprintType)
enum class EPalBattleBGMType : uint8 {
    None,
    Cute,
    Cool,
    Strong,
    Human_Common,
    Human_Villain,
    FieldBoss,
    Predator,
    EyeofCthulhu,
    Machine,
    Legend,
    RaidBoss,
    TowerBoss,
    RaidBoss_KingBahamut,
    RaidBoss_DarkMechaDragon,
    RaidBoss_MoonLord,
    RaidBoss_LegendDeer,
    RaidBoss_LegendDeer2,
};


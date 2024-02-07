#pragma once
#include "CoreMinimal.h"
#include "EPalWorkableType.generated.h"

UENUM(BlueprintType)
enum class EPalWorkableType : uint8 {
    Illegal,
    Progress,
    CollectItem,
    TransportItem,
    TransportItemInBaseCamp,
    ReviveCharacter,
    CollectResource,
    LevelObject,
    Repair,
    Defense,
    BootUp,
    OnlyJoin,
    OnlyJoinAndWalkAround,
    RemoveMapObjectEffect,
    MonsterFarm,
    DeforestFoliage,
};


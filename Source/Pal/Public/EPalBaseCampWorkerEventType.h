#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampWorkerEventType.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampWorkerEventType : uint8 {
    None,
    Escape,
    OverworkDeath,
    Sick,
    DodgeWork,
    DodgeWork_Short,
    DodgeWork_Sleep,
    EatTooMuch,
    Trantrum,
    FightWithFriend,
    TurnFoodBox,
    DestroyBuilding,
};


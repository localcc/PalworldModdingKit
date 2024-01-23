#pragma once
#include "CoreMinimal.h"
#include "EPalUIWorkerCommentType.generated.h"

UENUM(BlueprintType)
enum class EPalUIWorkerCommentType : uint8 {
    None,
    Normal,
    Normal_Craftsman,
    Normal_Sabotage,
    Dying,
    Hungry_Half,
    Hungry_Low,
    Hungry_Starvation,
    LowSanity_Half,
    LowSanity_Warning,
    LowSanity_Emergency,
    Illnesses,
    Injuries,
    Bulimia,
    Weakness,
    DisturbingElement,
    DodgeWork,
    DodgeWork_Short,
    DodgeWork_Sleep,
    EatTooMuch,
    Trantrum,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectConcreteModelModuleType.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectConcreteModelModuleType : uint8 {
    None,
    ItemContainer,
    CharacterContainer,
    Workee,
    Energy,
    StatusObserver,
    ItemStack,
    Switch,
    PlayerRecord,
    BaseCampPassiveEffect,
    PasswordLock,
    RequireElementalAction,
    Picking,
};


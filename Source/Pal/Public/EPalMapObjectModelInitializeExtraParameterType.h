#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectModelInitializeExtraParameterType.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectModelInitializeExtraParameterType : uint8 {
    Undefined,
    Build,
    SpawnedBy,
    Spawner,
    Item,
    TreasureBox,
    DropItem,
    ItemDropObject,
    Location,
    InitialItem,
    InitialCharacter,
    PalEgg,
    Note,
    Interact,
    ItemContainerAttribute,
    ByPlayerUId,
    DropCharacter,
    InstanceId,
};


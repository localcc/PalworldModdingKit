#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectDisposeOptionType.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectDisposeOptionType : uint8 {
    NoDropItems,
    NotAutoPickup,
    OpenTreasureBox,
    Immediately,
    NotNotifyOwnerSpawnerLevelObject,
    ByUnloadStage,
    DropBuildMaterials,
    RequireRespawnImmediately,
};


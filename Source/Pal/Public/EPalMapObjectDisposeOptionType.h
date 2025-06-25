#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectDisposeOptionType.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectDisposeOptionType : uint8 {
    NoDropItems,
    NotAutoPickup,
    OpenTreasureBox,
    ImmediatelyInGameThread,
    NotNotifyOwnerSpawnerLevelObject,
    ByUnloadStage,
    DropBuildMaterials,
    RequireRespawnImmediately,
    Replace,
    BuildCancel,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalWordFilterSceneType.generated.h"

UENUM(BlueprintType)
enum class EPalWordFilterSceneType : uint8 {
    PlayerName,
    PalName,
    WorldName,
    GuildName,
    SignBoard,
    TextChat,
};


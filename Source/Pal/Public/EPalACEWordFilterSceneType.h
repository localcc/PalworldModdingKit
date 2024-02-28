#pragma once
#include "CoreMinimal.h"
#include "EPalACEWordFilterSceneType.generated.h"

UENUM(BlueprintType)
enum class EPalACEWordFilterSceneType : uint8 {
    PlayerName,
    PalName,
    WorldName,
    GuildName,
    SignBoard,
    TextChat,
};


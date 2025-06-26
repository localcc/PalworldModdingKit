#pragma once
#include "CoreMinimal.h"
#include "EPalArenaSequencerOwnerType.generated.h"

UENUM(BlueprintType)
enum class EPalArenaSequencerOwnerType : uint8 {
    None,
    Player_Client,
    Player_Server,
    Manager_Server,
    Spectator,
};


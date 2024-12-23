#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerReplicationEntityType.generated.h"

UENUM(BlueprintType)
enum class EPalPlayerReplicationEntityType : uint8 {
    GuildChest,
    CharacterTeamMissionAssignedInfo,
};


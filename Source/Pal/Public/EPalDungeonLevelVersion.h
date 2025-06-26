#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonLevelVersion.generated.h"

UENUM(BlueprintType)
enum class EPalDungeonLevelVersion : uint8 {
    BeforeVersionWasAdded,
    ConvertDungeonLevelsToNewer,
    VersionPlusOne,
    LatestVersion = ConvertDungeonLevelsToNewer,
};


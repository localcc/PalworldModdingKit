#pragma once
#include "CoreMinimal.h"
#include "EPalBuildInstallCheckModeType.generated.h"

UENUM(BlueprintType)
enum class EPalBuildInstallCheckModeType : uint8 {
    Normal,
    InstallAtReticle,
};


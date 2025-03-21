#pragma once
#include "CoreMinimal.h"
#include "EPalUserPrivilege.generated.h"

UENUM(BlueprintType)
enum class EPalUserPrivilege : uint8 {
    CrossPlay,
    UserGeneratedContent,
};


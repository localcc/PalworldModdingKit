#pragma once
#include "CoreMinimal.h"
#include "ELoginStatusType.generated.h"

UENUM(BlueprintType)
enum class ELoginStatusType : uint8 {
    NotLoggedIn,
    UsingLocalProfile,
    LoggedIn,
};


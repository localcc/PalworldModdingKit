#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerAccountState.generated.h"

UENUM(BlueprintType)
enum class EPalPlayerAccountState : uint8 {
    Uninitialized,
    Initialized,
    InNewCreation,
    Login,
    Logout,
};


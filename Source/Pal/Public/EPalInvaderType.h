#pragma once
#include "CoreMinimal.h"
#include "EPalInvaderType.generated.h"

UENUM(BlueprintType)
enum class EPalInvaderType : uint8 {
    None,
    InvaderEnemy,
    VisitorNPC,
};


#pragma once
#include "CoreMinimal.h"
#include "EPalNPCFaceType.generated.h"

UENUM(BlueprintType)
enum class EPalNPCFaceType : uint8 {
    None,
    Mobu_A,
    Mobu_B,
    Mobu_C,
    Pocile,
    Hunter,
    Shop,
};


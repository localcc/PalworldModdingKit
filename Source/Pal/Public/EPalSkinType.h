#pragma once
#include "CoreMinimal.h"
#include "EPalSkinType.generated.h"

UENUM(BlueprintType)
enum class EPalSkinType : uint8 {
    None,
    Head,
    Body,
    Glider,
    Weapon,
    Pal,
};


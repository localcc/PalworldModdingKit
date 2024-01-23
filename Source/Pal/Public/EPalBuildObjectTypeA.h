#pragma once
#include "CoreMinimal.h"
#include "EPalBuildObjectTypeA.generated.h"

UENUM(BlueprintType)
enum class EPalBuildObjectTypeA : uint8 {
    Product,
    Pal,
    Storage,
    Food,
    Infrastructure,
    Light,
    Foundation,
    Defense,
    Other,
    Furniture,
    Dismantle,
};


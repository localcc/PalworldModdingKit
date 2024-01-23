#pragma once
#include "CoreMinimal.h"
#include "EPalBuildObjectTypeB.generated.h"

UENUM(BlueprintType)
enum class EPalBuildObjectTypeB : uint8 {
    Prod_Craft,
    Prod_Resource,
    Prod_Furnace,
    Prod_Medicine,
    Pal_Capture,
    Pal_Breed,
    Pal_Modify,
    Infra_Medical,
    Infra_Storage,
    Infra_Trade,
    Infra_GeneratePower,
    Infra_Defense,
    Infra_Environment,
    Food_Basic,
    Food_Agriculture,
    Food_Cooking,
    Food_Livestock,
    Found_Basic,
    Found_House,
    Other,
};


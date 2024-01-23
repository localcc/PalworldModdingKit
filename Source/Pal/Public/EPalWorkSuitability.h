#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.generated.h"

UENUM(BlueprintType)
enum class EPalWorkSuitability : uint8 {
    None,
    EmitFlame,
    Watering,
    Seeding,
    GenerateElectricity,
    Handcraft,
    Collection,
    Deforest,
    Mining,
    OilExtraction,
    ProductMedicine,
    Cool,
    Transport,
    MonsterFarm,
    Anyone,
    MAX,
};


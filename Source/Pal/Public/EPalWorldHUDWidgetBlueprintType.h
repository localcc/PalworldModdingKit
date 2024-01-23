#pragma once
#include "CoreMinimal.h"
#include "EPalWorldHUDWidgetBlueprintType.generated.h"

UENUM(BlueprintType)
enum class EPalWorldHUDWidgetBlueprintType : uint8 {
    Undefined,
    ConvertItem,
    ProductItem,
    FarmCrop,
    FarmBlockV2,
    BuildProgress,
    LackElectricity,
    RecoverPal,
    HatchingPalEgg,
    GenerateEnergy,
    HeadupWantFood,
    HeadupPossessItem,
    HeadupInvader,
    BossEntryWait,
    BreedFarm,
    MapObjectHP,
    CommonWorkRequirement,
};


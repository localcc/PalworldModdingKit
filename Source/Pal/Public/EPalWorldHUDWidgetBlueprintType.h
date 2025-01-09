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
    MultiHatchingPalEgg,
    GenerateEnergy,
    HeadupWantFood,
    HeadupPossessItem,
    HeadupInvader,
    BossEntryWait,
    BreedFarm,
    MapObjectHP,
    MapObjectMultiplayModifier,
    CommonWorkRequirement,
    LabResearch,
    Expedition,
    SkillFruitFarm,
};


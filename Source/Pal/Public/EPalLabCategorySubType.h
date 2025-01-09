#pragma once
#include "CoreMinimal.h"
#include "EPalLabCategorySubType.generated.h"

UENUM(BlueprintType)
enum class EPalLabCategorySubType : uint8 {
    None,
    CraftSpeed_EmitFlame,
    CraftSpeed_Watering,
    CraftSpeed_Seeding,
    CraftSpeed_GenerateElectricity,
    CraftSpeed_Handcraft,
    CraftSpeed_Deforest,
    CraftSpeed_Mining,
    CraftSpeed_ProductMedicine,
    CraftSpeed_Cool,
    AttackRateBaseCampWorker,
    DefenseRateBaseCampWorker,
    ProductExtraItemProbability,
    ProductExtraItemProbability_Bullet,
    ProductExtraItemProbability_Sphere,
    ProductExtraItemProbability_Ingot,
    ProductExtraItemProbability_Food,
    ProductExtraItemProbability_Ore,
    ProductItemConsumeMaterialNumRate,
    LabResearchSpeed,
    PalEggHatchingSpeed,
    EnergyStorageRate,
    ConsumeEnergyRate,
    ExpeditionRewardRate,
    ExpeditionTimeCostRate,
    FarmCropGrowupSpeed,
    FarmCropHarvestNumRate,
    ItemCorruptionSpeedRate,
    OilExtractionSpeedRate,
    TechnologyUnlock,
};


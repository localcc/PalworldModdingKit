#pragma once
#include "CoreMinimal.h"
#include "EPalWorkType.generated.h"

UENUM(BlueprintType)
enum class EPalWorkType : uint8 {
    None,
    CommonTemp,
    ReviveCharacter,
    Architecture,
    RepairBuildObject,
    FarmHarvest,
    HarvestLevelObject,
    TransportFoodItemInBaseCamp,
    Seeding,
    Watering,
    Cooking,
    TransportDisposableItemInBaseCamp,
    ConvertItem,
    ProductItem,
    Smelting,
    ProductMedicine,
    TransportItemInBaseCamp,
    CollectResourcePickable,
    ProductResource_Deforest,
    ProductResource_Mining,
    ProductResource_Deforest_OnFacility,
    ProductResource_Mining_OnFacility,
    GenerateEnergy,
    Ignition,
    Defense,
    BreedFarm,
    MonsterFarm,
    ExtinguishBurn,
    Cool,
    Watering_Farm,
    Attack,
    CollectItemToStorage,
    TransportItem,
    CollectResource,
    GrowupPromotion,
};


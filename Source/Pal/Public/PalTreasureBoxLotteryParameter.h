#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectSpawnerTreasureBoxLotteryParameter.h"
#include "PalTreasureBoxLotteryParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalTreasureBoxLotteryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectSpawnerTreasureBoxLotteryParameter> MapObjectAndFieldLotteryNameWeightList;
    
    PAL_API FPalTreasureBoxLotteryParameter();
};


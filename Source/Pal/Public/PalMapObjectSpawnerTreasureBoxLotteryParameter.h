#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectSpawnerTreasureBoxLotteryParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectSpawnerTreasureBoxLotteryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData SpawnMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_FieldLotteryNameData FieldLotteryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    PAL_API FPalMapObjectSpawnerTreasureBoxLotteryParameter();
};


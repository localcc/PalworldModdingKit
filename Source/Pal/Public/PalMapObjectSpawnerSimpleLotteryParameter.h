#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectSpawnerSimpleLotteryParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectSpawnerSimpleLotteryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData SpawnMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    PAL_API FPalMapObjectSpawnerSimpleLotteryParameter();
};


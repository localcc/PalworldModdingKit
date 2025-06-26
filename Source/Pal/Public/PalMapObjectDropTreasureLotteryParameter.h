#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectDropTreasureLotteryParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectDropTreasureLotteryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData SpawnMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData StaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    PAL_API FPalMapObjectDropTreasureLotteryParameter();
};


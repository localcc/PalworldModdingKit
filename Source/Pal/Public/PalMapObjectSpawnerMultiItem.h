#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalMapObjectSpawnerBase.h"
#include "PalMapObjectSpawnerMultiItem.generated.h"

UCLASS(Blueprintable)
class PAL_API APalMapObjectSpawnerMultiItem : public APalMapObjectSpawnerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_FieldLotteryNameData FieldLotteryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTimeMinutesObtained;
    
public:
    APalMapObjectSpawnerMultiItem(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalMapObjectOperationResult.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectSpawnerSingleBase.h"
#include "PalMapObjectSpawnerTreasureBoxLotteryParameter.h"
#include "PalMapObjectSpawnerTreasureBox.generated.h"

UCLASS(Blueprintable)
class PAL_API APalMapObjectSpawnerTreasureBox : public APalMapObjectSpawnerSingleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData SpawnMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_FieldLotteryNameData FieldLotteryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLotteryByMultiTreasureBoxLotteryParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectSpawnerTreasureBoxLotteryParameter> MultiTreasureBoxLotteryParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTimeMinutesObtained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespawnableMulti;
    
public:
    APalMapObjectSpawnerTreasureBox(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
};


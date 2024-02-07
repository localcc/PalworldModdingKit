#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalMapObjectOperationResult.h"
#include "PalMapObjectPickupItemPalEggLotteryData.h"
#include "PalMapObjectSpawnerSingleBase.h"
#include "PalMapObjectSpawnerPalEgg.generated.h"

UCLASS(Blueprintable)
class PAL_API APalMapObjectSpawnerPalEgg : public APalMapObjectSpawnerSingleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectPickupItemPalEggLotteryData> SpawnPalEggLotteryDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTimeMinutesObtained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespawnableMulti;
    
public:
    APalMapObjectSpawnerPalEgg(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
};


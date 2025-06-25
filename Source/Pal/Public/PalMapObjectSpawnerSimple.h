#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalMapObjectOperationResult.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectSpawnerSimpleLotteryParameter.h"
#include "PalMapObjectSpawnerSingleBase.h"
#include "PalMapObjectSpawnerSimple.generated.h"

UCLASS(Blueprintable)
class PAL_API APalMapObjectSpawnerSimple : public APalMapObjectSpawnerSingleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData MapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLotteryByMultiLotteryParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectSpawnerSimpleLotteryParameter> MultiLotteryParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowOverlapForMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespawnableMulti;
    
public:
    APalMapObjectSpawnerSimple(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectSpawnerSaveData.h"
#include "PalMapObjectSpawnerInStageSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectSpawnerInStageSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalMapObjectSpawnerSaveData> SpawnerDataMapByLevelObjectInstanceId;
    
    PAL_API FPalMapObjectSpawnerInStageSaveData();
};


#pragma once
#include "CoreMinimal.h"
#include "PalRandomizerSpawnInfoSaveData.h"
#include "PalRandomizerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalRandomizerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalRandomizerSpawnInfoSaveData> RegionRandomizeSpawnerHashList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalRandomizerSpawnInfoSaveData> AllRandomizeSpawnerHashList;
    
    PAL_API FPalRandomizerSaveData();
};


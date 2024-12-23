#pragma once
#include "CoreMinimal.h"
#include "EPalRandomizerType.h"
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> ImprisonmentBossRemapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> FieldBossRemapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalRandomizerType LastRandomizerType;
    
    PAL_API FPalRandomizerSaveData();
};


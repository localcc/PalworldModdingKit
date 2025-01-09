#pragma once
#include "CoreMinimal.h"
#include "EPalRandomizerType.h"
#include "PalRandomizerSpawnInfoSaveData.h"
#include "PalRandomizerReplicateData.generated.h"

USTRUCT(BlueprintType)
struct FPalRandomizerReplicateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FString RandomizerSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    EPalRandomizerType RandomizerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FPalRandomizerSpawnInfoSaveData> RandomizerSpawnerRegionHashList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FPalRandomizerSpawnInfoSaveData> RandomizerSpawnerInstanceHashList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> ImprisonmentBossRemapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> FieldBossRemapList;
    
    PAL_API FPalRandomizerReplicateData();
};


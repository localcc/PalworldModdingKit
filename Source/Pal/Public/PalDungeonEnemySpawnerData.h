#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalDungeonEnemySpawnerRankType.h"
#include "PalDungeonEnemySpawnerData.generated.h"

class APalNPCSpawnerBase;

USTRUCT(BlueprintType)
struct PAL_API FPalDungeonEnemySpawnerData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnAreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDungeonEnemySpawnerRankType RankType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightInSpawnAreaAndRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalNPCSpawnerBase> SpawnerBlueprintSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnerName;
    
    FPalDungeonEnemySpawnerData();
};


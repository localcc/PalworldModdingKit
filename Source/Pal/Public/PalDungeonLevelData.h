#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalDungeonLevelData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDungeonLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnAreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightInSpawnArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    FPalDungeonLevelData();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalDungeonItemSpawnerType.h"
#include "PalDungeonItemSpawnerData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDungeonItemSpawnerData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnAreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDungeonItemSpawnerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemFieldLotteryName;
    
    FPalDungeonItemSpawnerData();
};


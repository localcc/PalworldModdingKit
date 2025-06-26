#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalDungeonRewardSpawnerContentType.h"
#include "EPalDungeonRewardSpawnerType.h"
#include "PalDungeonRewardSpawnerLotteryData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct PAL_API FPalDungeonRewardSpawnerLotteryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnAreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDungeonRewardSpawnerType RewardSpawnerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDungeonRewardSpawnerContentType SpawnerContentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LotteryValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LotteryValueBlueprintClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> LotteryValueBlueprintSoftClass;
    
    FPalDungeonRewardSpawnerLotteryData();
};


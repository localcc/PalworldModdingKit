#pragma once
#include "CoreMinimal.h"
#include "PalRaidBossSpawnInfo.h"
#include "PalRaidBossSpawnInfoList.generated.h"

USTRUCT(BlueprintType)
struct FPalRaidBossSpawnInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalRaidBossSpawnInfo> SpawnInfos;
    
    PAL_API FPalRaidBossSpawnInfoList();
};


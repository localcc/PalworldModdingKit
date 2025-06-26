#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalDungeonRewardSpawnerLotteryDataWithRowName.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDungeonRewardSpawnerLotteryDataWithRowName : public FTableRowBase {
    GENERATED_BODY()
public:
    FPalDungeonRewardSpawnerLotteryDataWithRowName();
};


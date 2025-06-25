#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalArenaRank.h"
#include "PalArenaSoloClearItemInfo.h"
#include "PalArenaSoloClearRewardRow.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaSoloClearRewardRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalArenaRank Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalArenaSoloClearItemInfo> FirstClearReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalArenaSoloClearItemInfo> RepeatClearReward;
    
    PAL_API FPalArenaSoloClearRewardRow();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalFishingSpotLotteryNameDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalFishingSpotLotteryNameDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTime;
    
    PAL_API FPalFishingSpotLotteryNameDataRow();
};


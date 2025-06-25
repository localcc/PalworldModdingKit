#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalTreasureMapPointDataLotteryParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalTreasureMapPointDataLotteryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> IgnorePointIds;
    
    PAL_API FPalTreasureMapPointDataLotteryParameter();
};


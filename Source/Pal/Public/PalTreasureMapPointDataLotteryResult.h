#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalTreasureMapPointData.h"
#include "PalTreasureMapPointDataLotteryResult.generated.h"

USTRUCT(BlueprintType)
struct FPalTreasureMapPointDataLotteryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PointId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalTreasureMapPointData PointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFoundAllPoint;
    
    PAL_API FPalTreasureMapPointDataLotteryResult();
};


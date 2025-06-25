#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalWorkSuitabilityDefineData.h"
#include "PalMapObjectFishPondLotteryTargetData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectFishPondLotteryTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData RequiredMaterialStaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredMaterialItemNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredWorkAmound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalWorkSuitabilityDefineData WorkSuitabilityDefineData;
    
    PAL_API FPalMapObjectFishPondLotteryTargetData();
};


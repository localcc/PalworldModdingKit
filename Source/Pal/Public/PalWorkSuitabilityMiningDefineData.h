#pragma once
#include "CoreMinimal.h"
#include "PalMiningRankDefineData.h"
#include "PalWorkSuitabilityDefineData.h"
#include "PalWorkSuitabilityMiningDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSuitabilityMiningDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalWorkSuitabilityDefineData CommonDefineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMiningRankDefineData> MiningDefineData;
    
    PAL_API FPalWorkSuitabilityMiningDefineData();
};


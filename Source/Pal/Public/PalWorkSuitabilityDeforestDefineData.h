#pragma once
#include "CoreMinimal.h"
#include "PalDeforestRankDefineData.h"
#include "PalWorkSuitabilityDefineData.h"
#include "PalWorkSuitabilityDeforestDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSuitabilityDeforestDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalWorkSuitabilityDefineData CommonDefineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDeforestRankDefineData> DeforestDefineData;
    
    PAL_API FPalWorkSuitabilityDeforestDefineData();
};


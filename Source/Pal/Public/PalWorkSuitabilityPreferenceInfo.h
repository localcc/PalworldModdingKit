#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalWorkSuitabilityPreferenceInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSuitabilityPreferenceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalWorkSuitability> OffWorkSuitabilityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowBaseCampBattle;
    
    PAL_API FPalWorkSuitabilityPreferenceInfo();
};


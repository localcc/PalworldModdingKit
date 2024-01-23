#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalWorkSuitabilityInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSuitabilityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkSuitability WorkSuitability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    PAL_API FPalWorkSuitabilityInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampFacilityUsageState.h"
#include "PalInstanceID.h"
#include "PalBaseCampFacilityUsageInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampFacilityUsageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalBaseCampFacilityUsageState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID ReservedIndividualId;
    
    PAL_API FPalBaseCampFacilityUsageInfo();
};


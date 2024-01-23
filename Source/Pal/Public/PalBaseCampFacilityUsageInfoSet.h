#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampFacilityUsageInfo.h"
#include "PalBaseCampFacilityUsageInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampFacilityUsageInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalBaseCampFacilityUsageInfo> InfoMap;
    
    PAL_API FPalBaseCampFacilityUsageInfoSet();
};


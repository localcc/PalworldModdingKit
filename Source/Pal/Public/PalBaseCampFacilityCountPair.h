#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectWorkerAvailableFacilityType.h"
#include "PalBaseCampFacilityCountPair.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampFacilityCountPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalMapObjectWorkerAvailableFacilityType FacilityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FacilityCount;
    
    PAL_API FPalBaseCampFacilityCountPair();
};


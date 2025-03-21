#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalPatrolMovementPoint.generated.h"

USTRUCT(BlueprintType)
struct FPalPatrolMovementPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    PAL_API FPalPatrolMovementPoint();
};


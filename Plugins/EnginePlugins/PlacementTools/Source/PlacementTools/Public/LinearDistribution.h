#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LinearDistribution.generated.h"

USTRUCT(BlueprintType)
struct FLinearDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> CurvePoints;
    
    PLACEMENTTOOLS_API FLinearDistribution();
};


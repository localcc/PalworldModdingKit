#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalTreasureMapPointData.generated.h"

USTRUCT(BlueprintType)
struct FPalTreasureMapPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitPointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PointLocation;
    
    PAL_API FPalTreasureMapPointData();
};


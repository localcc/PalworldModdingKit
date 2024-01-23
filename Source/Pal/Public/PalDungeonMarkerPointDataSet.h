#pragma once
#include "CoreMinimal.h"
#include "PalDungeonMarkerPointData.h"
#include "PalDungeonMarkerPointDataSet.generated.h"

USTRUCT(BlueprintType)
struct FPalDungeonMarkerPointDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalDungeonMarkerPointData> MarkerPoints;
    
    PAL_API FPalDungeonMarkerPointDataSet();
};


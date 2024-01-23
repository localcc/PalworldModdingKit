#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalStageAreaInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalStageAreaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox BoundingBox;
    
    PAL_API FPalStageAreaInfo();
};


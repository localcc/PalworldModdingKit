#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalUIPaldexDistributionLocationStruct.generated.h"

USTRUCT(BlueprintType)
struct FPalUIPaldexDistributionLocationStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    PAL_API FPalUIPaldexDistributionLocationStruct();
};


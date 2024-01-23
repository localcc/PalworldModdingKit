#pragma once
#include "CoreMinimal.h"
#include "PalWorkSuitabilityDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSuitabilityDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChangeWorkAnimPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<int32> CraftSpeeds;
    
    PAL_API FPalWorkSuitabilityDefineData();
};


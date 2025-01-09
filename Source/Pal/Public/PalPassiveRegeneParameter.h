#pragma once
#include "CoreMinimal.h"
#include "PalPassiveRegeneParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveRegeneParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Interval;
    
    PAL_API FPalPassiveRegeneParameter();
};


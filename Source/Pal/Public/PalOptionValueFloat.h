#pragma once
#include "CoreMinimal.h"
#include "PalOptionValueFloat.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionValueFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    PAL_API FPalOptionValueFloat();
};


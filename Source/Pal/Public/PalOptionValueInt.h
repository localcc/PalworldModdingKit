#pragma once
#include "CoreMinimal.h"
#include "PalOptionValueInt.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionValueInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    PAL_API FPalOptionValueInt();
};


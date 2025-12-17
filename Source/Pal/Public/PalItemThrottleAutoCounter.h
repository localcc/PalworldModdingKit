#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalItemThrottleAutoCounter.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FPalItemThrottleAutoCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> WorldContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    PAL_API FPalItemThrottleAutoCounter();
};


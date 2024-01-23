#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectStatusValue.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectStatusValue {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValue;
    
public:
    PAL_API FPalMapObjectStatusValue();
};


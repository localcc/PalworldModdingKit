#pragma once
#include "CoreMinimal.h"
#include "FixedPoint64.generated.h"

USTRUCT(BlueprintType)
struct FFixedPoint64 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Value;
    
public:
    PAL_API FFixedPoint64();
};


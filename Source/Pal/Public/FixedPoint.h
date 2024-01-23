#pragma once
#include "CoreMinimal.h"
#include "FixedPoint.generated.h"

USTRUCT(BlueprintType)
struct FFixedPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    PAL_API FFixedPoint();
};


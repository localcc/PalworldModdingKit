#pragma once
#include "CoreMinimal.h"
#include "FloatCounter.generated.h"

USTRUCT(BlueprintType)
struct FFloatCounter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TriggerValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentStackValue;
    
public:
    PAL_API FFloatCounter();
};


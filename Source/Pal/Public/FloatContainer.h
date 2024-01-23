#pragma once
#include "CoreMinimal.h"
#include "FloatContainer_FloatPair.h"
#include "FloatContainer.generated.h"

USTRUCT(BlueprintType)
struct FFloatContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFloatContainer_FloatPair> Values;
    
public:
    PAL_API FFloatContainer();
};


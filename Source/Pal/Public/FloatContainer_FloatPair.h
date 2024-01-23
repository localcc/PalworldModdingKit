#pragma once
#include "CoreMinimal.h"
#include "FloatContainer_FloatPair.generated.h"

USTRUCT(BlueprintType)
struct FFloatContainer_FloatPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Value;
    
    PAL_API FFloatContainer_FloatPair();
};


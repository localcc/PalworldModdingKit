#pragma once
#include "CoreMinimal.h"
#include "GameDateTime.generated.h"

USTRUCT(BlueprintType)
struct FGameDateTime {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Ticks;
    
public:
    PAL_API FGameDateTime();
};


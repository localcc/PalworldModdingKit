#pragma once
#include "CoreMinimal.h"
#include "ThreadSafeBoolean.generated.h"

USTRUCT(BlueprintType)
struct FThreadSafeBoolean {
    GENERATED_BODY()
public:
    PAL_API FThreadSafeBoolean();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalObjectCollectorTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalObjectCollectorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalObjectCollectorTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalObjectCollectorTickFunction> : public TStructOpsTypeTraitsBase2<FPalObjectCollectorTickFunction>
{
    enum
    {
        WithCopy = false
    };
};


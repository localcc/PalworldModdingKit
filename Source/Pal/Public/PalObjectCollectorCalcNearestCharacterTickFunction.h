#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalObjectCollectorCalcNearestCharacterTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalObjectCollectorCalcNearestCharacterTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalObjectCollectorCalcNearestCharacterTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalObjectCollectorCalcNearestCharacterTickFunction> : public TStructOpsTypeTraitsBase2<FPalObjectCollectorCalcNearestCharacterTickFunction>
{
    enum
    {
        WithCopy = false
    };
};


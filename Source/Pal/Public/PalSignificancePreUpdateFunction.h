#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalSignificancePreUpdateFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalSignificancePreUpdateFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalSignificancePreUpdateFunction();
};

template<>
struct TStructOpsTypeTraits<FPalSignificancePreUpdateFunction> : public TStructOpsTypeTraitsBase2<FPalSignificancePreUpdateFunction>
{
    enum
    {
        WithCopy = false
    };
};


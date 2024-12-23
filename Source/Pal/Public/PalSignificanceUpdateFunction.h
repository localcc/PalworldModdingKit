#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalSignificanceUpdateFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalSignificanceUpdateFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalSignificanceUpdateFunction();
};

template<>
struct TStructOpsTypeTraits<FPalSignificanceUpdateFunction> : public TStructOpsTypeTraitsBase2<FPalSignificanceUpdateFunction>
{
    enum
    {
        WithCopy = false
    };
};


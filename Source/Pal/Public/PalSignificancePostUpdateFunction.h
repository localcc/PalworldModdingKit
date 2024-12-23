#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalSignificancePostUpdateFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalSignificancePostUpdateFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalSignificancePostUpdateFunction();
};

template<>
struct TStructOpsTypeTraits<FPalSignificancePostUpdateFunction> : public TStructOpsTypeTraitsBase2<FPalSignificancePostUpdateFunction>
{
    enum
    {
        WithCopy = false
    };
};


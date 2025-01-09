#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalSignificanceUpdateMapObjectFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalSignificanceUpdateMapObjectFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalSignificanceUpdateMapObjectFunction();
};

template<>
struct TStructOpsTypeTraits<FPalSignificanceUpdateMapObjectFunction> : public TStructOpsTypeTraitsBase2<FPalSignificanceUpdateMapObjectFunction>
{
    enum
    {
        WithCopy = false
    };
};


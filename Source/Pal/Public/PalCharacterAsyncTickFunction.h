#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalCharacterAsyncTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterAsyncTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalCharacterAsyncTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalCharacterAsyncTickFunction> : public TStructOpsTypeTraitsBase2<FPalCharacterAsyncTickFunction>
{
    enum
    {
        WithCopy = false
    };
};


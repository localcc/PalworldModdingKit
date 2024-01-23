#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalMapObjectManageAsyncTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectManageAsyncTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalMapObjectManageAsyncTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalMapObjectManageAsyncTickFunction> : public TStructOpsTypeTraitsBase2<FPalMapObjectManageAsyncTickFunction>
{
    enum
    {
        WithCopy = false
    };
};


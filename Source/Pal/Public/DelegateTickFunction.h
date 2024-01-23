#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "DelegateTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FDelegateTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FDelegateTickFunction();
};

template<>
struct TStructOpsTypeTraits<FDelegateTickFunction> : public TStructOpsTypeTraitsBase2<FDelegateTickFunction>
{
    enum
    {
        WithCopy = false
    };
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalMapObjectManageTickInBackgroundFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectManageTickInBackgroundFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalMapObjectManageTickInBackgroundFunction();
};

template<>
struct TStructOpsTypeTraits<FPalMapObjectManageTickInBackgroundFunction> : public TStructOpsTypeTraitsBase2<FPalMapObjectManageTickInBackgroundFunction>
{
    enum
    {
        WithCopy = false
    };
};


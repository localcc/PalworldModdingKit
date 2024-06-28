#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalMapObjectManageTickPostProcessFunction.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectManageTickPostProcessFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PAL_API FPalMapObjectManageTickPostProcessFunction();
};

template<>
struct TStructOpsTypeTraits<FPalMapObjectManageTickPostProcessFunction> : public TStructOpsTypeTraitsBase2<FPalMapObjectManageTickPostProcessFunction>
{
    enum
    {
        WithCopy = false
    };
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "PalWorkProgressManagerWorkProcessTickFunction.generated.h"

class UPalWorkProgressManager;

USTRUCT(BlueprintType)
struct FPalWorkProgressManagerWorkProcessTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalWorkProgressManager* Target;
    
    PAL_API FPalWorkProgressManagerWorkProcessTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPalWorkProgressManagerWorkProcessTickFunction> : public TStructOpsTypeTraitsBase2<FPalWorkProgressManagerWorkProcessTickFunction>
{
    enum
    {
        WithCopy = false
    };
};


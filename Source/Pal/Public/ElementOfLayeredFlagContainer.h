#pragma once
#include "CoreMinimal.h"
#include "FlagContainer.h"
#include "ElementOfLayeredFlagContainer.generated.h"

USTRUCT(BlueprintType)
struct FElementOfLayeredFlagContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer Container;
    
    PAL_API FElementOfLayeredFlagContainer();
};


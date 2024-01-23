#pragma once
#include "CoreMinimal.h"
#include "ElementOfLayeredFlagContainer.h"
#include "LayeredFlagContainer.generated.h"

USTRUCT(BlueprintType)
struct FLayeredFlagContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FElementOfLayeredFlagContainer> ContainerList;
    
public:
    PAL_API FLayeredFlagContainer();
};


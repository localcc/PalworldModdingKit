#pragma once
#include "CoreMinimal.h"
#include "PalPassiveRegeneArrayWrapper.generated.h"

class UPalPassiveRegene;

USTRUCT(BlueprintType)
struct FPalPassiveRegeneArrayWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalPassiveRegene*> Items;
    
    PAL_API FPalPassiveRegeneArrayWrapper();
};


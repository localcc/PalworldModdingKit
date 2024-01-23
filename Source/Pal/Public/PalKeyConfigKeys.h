#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "PalKeyConfigKeys.generated.h"

USTRUCT(BlueprintType)
struct FPalKeyConfigKeys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey MainKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey SecondaryKey;
    
    PAL_API FPalKeyConfigKeys();
};


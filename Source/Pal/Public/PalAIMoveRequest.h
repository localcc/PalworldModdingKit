#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "PalAIMoveRequest.generated.h"

USTRUCT(BlueprintType)
struct FPalAIMoveRequest : public FAIMoveRequest {
    GENERATED_BODY()
public:
    PAL_API FPalAIMoveRequest();
};


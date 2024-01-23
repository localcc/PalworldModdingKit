#pragma once
#include "CoreMinimal.h"
#include "PalBelongInfo.h"
#include "PalContainerBelongInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalContainerBelongInfo : public FPalBelongInfo {
    GENERATED_BODY()
public:
    PAL_API FPalContainerBelongInfo();
};


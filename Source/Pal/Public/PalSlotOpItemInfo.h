#pragma once
#include "CoreMinimal.h"
#include "PalItemAndNum.h"
#include "PalSlotOpItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalSlotOpItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemAndNum Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorruptionProgressValue;
    
    PAL_API FPalSlotOpItemInfo();
};


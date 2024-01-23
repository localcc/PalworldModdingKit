#pragma once
#include "CoreMinimal.h"
#include "PalItemSlotId.h"
#include "PalItemSlotIdAndNum.generated.h"

USTRUCT(BlueprintType)
struct FPalItemSlotIdAndNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemSlotId SlotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    PAL_API FPalItemSlotIdAndNum();
};


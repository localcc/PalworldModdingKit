#pragma once
#include "CoreMinimal.h"
#include "PalItemAndSlot.h"
#include "PalSlotItemAndNum.generated.h"

USTRUCT(BlueprintType)
struct FPalSlotItemAndNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemAndSlot itemSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    PAL_API FPalSlotItemAndNum();
};


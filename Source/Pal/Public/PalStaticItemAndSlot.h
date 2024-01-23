#pragma once
#include "CoreMinimal.h"
#include "PalItemSlotId.h"
#include "PalStaticItemIdAndNum.h"
#include "PalStaticItemAndSlot.generated.h"

USTRUCT(BlueprintType)
struct FPalStaticItemAndSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalStaticItemIdAndNum ItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemSlotId SlotID;
    
    PAL_API FPalStaticItemAndSlot();
};


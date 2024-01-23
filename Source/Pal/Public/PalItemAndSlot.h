#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalItemSlotId.h"
#include "PalItemAndSlot.generated.h"

USTRUCT(BlueprintType)
struct FPalItemAndSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemSlotId SlotID;
    
    PAL_API FPalItemAndSlot();
};


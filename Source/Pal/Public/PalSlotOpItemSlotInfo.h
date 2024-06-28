#pragma once
#include "CoreMinimal.h"
#include "PalItemSlotId.h"
#include "PalSlotOpItemInfo.h"
#include "PalSlotOpItemSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalSlotOpItemSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalSlotOpItemInfo ItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemSlotId SlotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemSlotId FromSlotId;
    
    PAL_API FPalSlotOpItemSlotInfo();
};


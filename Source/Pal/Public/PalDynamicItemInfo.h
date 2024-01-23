#pragma once
#include "CoreMinimal.h"
#include "PalItemSlotId.h"
#include "PalDynamicItemInfo.generated.h"

class UPalDynamicItemDataBase;

USTRUCT(BlueprintType)
struct FPalDynamicItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemSlotId SlotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalDynamicItemDataBase* DynamicItemData;
    
    PAL_API FPalDynamicItemInfo();
};


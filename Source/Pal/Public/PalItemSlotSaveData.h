#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalItemId.h"
#include "PalItemSlotSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalItemSlotSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
    PAL_API FPalItemSlotSaveData();
};


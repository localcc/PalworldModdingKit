#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalItemContainerBelongInfo.h"
#include "PalItemSlotSaveData.h"
#include "PalItemContainerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalItemContainerSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemContainerBelongInfo BelongInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemSlotSaveData> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotNum;
    
    PAL_API FPalItemContainerSaveData();
};


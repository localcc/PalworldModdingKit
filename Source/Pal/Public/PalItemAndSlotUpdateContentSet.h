#pragma once
#include "CoreMinimal.h"
#include "PalItemAndSlot.h"
#include "PalStaticItemIdAndDynamicItemDataSet.h"
#include "PalItemAndSlotUpdateContentSet.generated.h"

USTRUCT(BlueprintType)
struct FPalItemAndSlotUpdateContentSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemAndSlot> UpdateContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalStaticItemIdAndDynamicItemDataSet> UpdateDynamicItems;
    
    PAL_API FPalItemAndSlotUpdateContentSet();
};


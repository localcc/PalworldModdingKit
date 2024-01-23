#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectItemContainerSlotAttribute.h"
#include "PalMapObjectItemContainerModuleSlotIndexes.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectItemContainerModuleSlotIndexes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMapObjectItemContainerSlotAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Indexes;
    
    PAL_API FPalMapObjectItemContainerModuleSlotIndexes();
};


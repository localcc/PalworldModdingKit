#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalItemPalEggDataHandle.generated.h"

USTRUCT(BlueprintType)
struct FPalItemPalEggDataHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> ItemRowNameArray;
    
    PAL_API FPalItemPalEggDataHandle();
};


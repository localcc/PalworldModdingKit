#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemIdAndDynamicItemDataSet.generated.h"

class UPalDynamicItemDataBase;

USTRUCT(BlueprintType)
struct FPalStaticItemIdAndDynamicItemDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalDynamicItemDataBase* DynamicItemData;
    
    PAL_API FPalStaticItemIdAndDynamicItemDataSet();
};


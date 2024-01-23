#pragma once
#include "CoreMinimal.h"
#include "PalDynamicItemDataInfo.generated.h"

class UPalDynamicItemDataBase;

USTRUCT(BlueprintType)
struct FPalDynamicItemDataInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalDynamicItemDataBase* ItemData;
    
    PAL_API FPalDynamicItemDataInfo();
};


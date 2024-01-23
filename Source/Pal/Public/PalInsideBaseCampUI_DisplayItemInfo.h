#pragma once
#include "CoreMinimal.h"
#include "PalInsideBaseCampUI_DisplayItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalInsideBaseCampUI_DisplayItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isShowWhenNothingItem;
    
    PAL_API FPalInsideBaseCampUI_DisplayItemInfo();
};


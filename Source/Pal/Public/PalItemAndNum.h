#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalItemAndNum.generated.h"

USTRUCT(BlueprintType)
struct FPalItemAndNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    PAL_API FPalItemAndNum();
};


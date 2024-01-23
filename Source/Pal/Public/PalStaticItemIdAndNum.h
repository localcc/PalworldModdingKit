#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemIdAndNum.generated.h"

USTRUCT(BlueprintType)
struct FPalStaticItemIdAndNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    PAL_API FPalStaticItemIdAndNum();
};


#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemDataAndNum.generated.h"

class UPalStaticItemDataBase;

USTRUCT(BlueprintType)
struct FPalStaticItemDataAndNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalStaticItemDataBase* StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    PAL_API FPalStaticItemDataAndNum();
};


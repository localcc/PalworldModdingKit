#pragma once
#include "CoreMinimal.h"
#include "PalLoadoutSummonData.generated.h"

class UPalDynamicItemDataBase;

USTRUCT(BlueprintType)
struct FPalLoadoutSummonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalDynamicItemDataBase* dynamicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SummonNum;
    
    PAL_API FPalLoadoutSummonData();
};


#pragma once
#include "CoreMinimal.h"
#include "PalMorphSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalMorphSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> WeightList;
    
    PAL_API FPalMorphSetting();
};


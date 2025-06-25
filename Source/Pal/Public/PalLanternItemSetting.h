#pragma once
#include "CoreMinimal.h"
#include "PalLanternItemSetting.generated.h"

class APalPlayerLampBase;

USTRUCT(BlueprintType)
struct FPalLanternItemSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalPlayerLampBase> SoftLanternClass;
    
    PAL_API FPalLanternItemSetting();
};


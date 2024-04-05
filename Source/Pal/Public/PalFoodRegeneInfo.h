#pragma once
#include "CoreMinimal.h"
#include "PalFoodRegeneEffectParameter.h"
#include "PalFoodRegeneInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalFoodRegeneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalFoodRegeneEffectParameter> RegeneEfectParameters;
    
    PAL_API FPalFoodRegeneInfo();
};


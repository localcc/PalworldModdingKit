#pragma once
#include "CoreMinimal.h"
#include "PalEggRankInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalEggRankInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PalRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EggScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HatchingSpeedDivisionRate;
    
    PAL_API FPalEggRankInfo();
};


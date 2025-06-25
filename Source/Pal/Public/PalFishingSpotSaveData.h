#pragma once
#include "CoreMinimal.h"
#include "PalFishingSpotSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalFishingSpotSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTimeFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentFishCount;
    
    PAL_API FPalFishingSpotSaveData();
};


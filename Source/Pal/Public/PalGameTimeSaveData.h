#pragma once
#include "CoreMinimal.h"
#include "PalGameTimeSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalGameTimeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 GameDateTimeTicks;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RealDateTimeTicks;
    
    PAL_API FPalGameTimeSaveData();
};


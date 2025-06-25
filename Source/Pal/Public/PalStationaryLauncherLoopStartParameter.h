#pragma once
#include "CoreMinimal.h"
#include "PalStationaryLauncherLoopStartParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalStationaryLauncherLoopStartParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
    PAL_API FPalStationaryLauncherLoopStartParameter();
};


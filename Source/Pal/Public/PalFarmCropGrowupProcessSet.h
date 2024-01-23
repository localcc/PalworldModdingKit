#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EPalFarmCropState.h"
#include "PalFarmCropGrowupProcessSet.generated.h"

USTRUCT(BlueprintType)
struct FPalFarmCropGrowupProcessSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalFarmCropState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference TargetCompRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProcessRate;
    
    PAL_API FPalFarmCropGrowupProcessSet();
};


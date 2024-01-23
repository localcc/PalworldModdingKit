#pragma once
#include "CoreMinimal.h"
#include "PalItemFlowInSplineInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalItemFlowInSplineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ItemActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProgressTime;
    
    PAL_API FPalItemFlowInSplineInfo();
};


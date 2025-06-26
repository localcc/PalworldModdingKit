#pragma once
#include "CoreMinimal.h"
#include "PalActivatableDamageAreaLoopStartParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalActivatableDamageAreaLoopStartParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveInterval;
    
    PAL_API FPalActivatableDamageAreaLoopStartParameter();
};


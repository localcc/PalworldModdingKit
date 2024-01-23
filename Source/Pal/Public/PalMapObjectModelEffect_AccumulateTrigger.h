#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelEffectBase.h"
#include "PalMapObjectModelEffect_AccumulateTrigger.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMapObjectModelEffect_AccumulateTrigger : public UPalMapObjectModelEffectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulateValue;
    
public:
    UPalMapObjectModelEffect_AccumulateTrigger();
};


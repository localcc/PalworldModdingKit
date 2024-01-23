#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "FootStepEffectInfo.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FFootStepEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, TSoftObjectPtr<UNiagaraSystem>> PhysicalSurfaceToEffect;
    
    PAL_API FFootStepEffectInfo();
};


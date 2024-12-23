#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampPassiveEffectBase.h"
#include "PalBaseCampPassiveEffect_SanityDecreaseSuppressor.generated.h"

UCLASS(Blueprintable)
class UPalBaseCampPassiveEffect_SanityDecreaseSuppressor : public UPalBaseCampPassiveEffectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SanityDecreaseSuppressionRate;
    
public:
    UPalBaseCampPassiveEffect_SanityDecreaseSuppressor();

};


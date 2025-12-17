#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampRaidDetectorBase.h"
#include "PalDamageResult.h"
#include "PalBaseCampRaidDetector_Worker.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampRaidDetector_Worker : public UPalBaseCampRaidDetectorBase {
    GENERATED_BODY()
public:
    UPalBaseCampRaidDetector_Worker();

private:
    UFUNCTION(BlueprintCallable)
    void OnWorkerRemoved(UPalIndividualCharacterHandle* RemovedWorkerHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnWorkerDamaged(FPalDamageResult DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnWorkerAdded(UPalIndividualCharacterHandle* AddedWorkerHandle);
    
};


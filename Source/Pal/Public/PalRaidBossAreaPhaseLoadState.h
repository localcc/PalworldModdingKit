#pragma once
#include "CoreMinimal.h"
#include "PalRaidBossAreaPhaseStateBase.h"
#include "PalRaidBossAreaPhaseLoadState.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalRaidBossAreaPhaseLoadState : public UPalRaidBossAreaPhaseStateBase {
    GENERATED_BODY()
public:
    UPalRaidBossAreaPhaseLoadState();

private:
    UFUNCTION(BlueprintCallable)
    void ProcessLoadPhase();
    
};


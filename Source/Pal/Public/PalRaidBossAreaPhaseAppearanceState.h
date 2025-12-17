#pragma once
#include "CoreMinimal.h"
#include "PalRaidBossAreaPhaseStateBase.h"
#include "PalRaidBossAreaPhaseAppearanceState.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalRaidBossAreaPhaseAppearanceState : public UPalRaidBossAreaPhaseStateBase {
    GENERATED_BODY()
public:
    UPalRaidBossAreaPhaseAppearanceState();

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishAppearancePerform();
    
};


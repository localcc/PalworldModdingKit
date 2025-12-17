#pragma once
#include "CoreMinimal.h"
#include "PalStateMachineStateBase.h"
#include "PalRaidBossAreaPhaseStateBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalRaidBossAreaPhaseStateBase : public UPalStateMachineStateBase {
    GENERATED_BODY()
public:
    UPalRaidBossAreaPhaseStateBase();

};


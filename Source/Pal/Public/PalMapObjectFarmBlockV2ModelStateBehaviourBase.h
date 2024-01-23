#pragma once
#include "CoreMinimal.h"
#include "PalStateMachineStateBase.h"
#include "PalMapObjectFarmBlockV2ModelStateBehaviourBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UPalMapObjectFarmBlockV2ModelStateBehaviourBase : public UPalStateMachineStateBase {
    GENERATED_BODY()
public:
    UPalMapObjectFarmBlockV2ModelStateBehaviourBase();
};


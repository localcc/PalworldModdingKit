#pragma once
#include "CoreMinimal.h"
#include "PalStateMachine.h"
#include "PalMapObjectFarmBlockV2ModelStateBehaviourMachine.generated.h"

class UPalMapObjectFarmBlockV2ModelStateBehaviourBase;

UCLASS(Blueprintable)
class UPalMapObjectFarmBlockV2ModelStateBehaviourMachine : public UPalStateMachine {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectFarmBlockV2ModelStateBehaviourBase* CurrentStateBehaviourCache;
    
public:
    UPalMapObjectFarmBlockV2ModelStateBehaviourMachine();
};


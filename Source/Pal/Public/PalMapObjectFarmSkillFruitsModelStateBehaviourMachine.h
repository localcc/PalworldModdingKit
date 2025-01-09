#pragma once
#include "CoreMinimal.h"
#include "PalStateMachine.h"
#include "PalMapObjectFarmSkillFruitsModelStateBehaviourMachine.generated.h"

class UPalMapObjectFarmSkillFruitsModelStateBehaviourBase;

UCLASS(Blueprintable)
class UPalMapObjectFarmSkillFruitsModelStateBehaviourMachine : public UPalStateMachine {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectFarmSkillFruitsModelStateBehaviourBase* CurrentStateBehaviourCache;
    
public:
    UPalMapObjectFarmSkillFruitsModelStateBehaviourMachine();

};


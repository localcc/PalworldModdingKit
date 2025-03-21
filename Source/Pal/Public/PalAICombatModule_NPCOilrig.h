#pragma once
#include "CoreMinimal.h"
#include "PalAICombatModule_Wild.h"
#include "PalAICombatModule_NPCOilrig.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalAICombatModule_NPCOilrig : public UPalAICombatModule_Wild {
    GENERATED_BODY()
public:
    UPalAICombatModule_NPCOilrig();

    UFUNCTION(BlueprintCallable)
    AActor* FindTargetByStack();
    
};


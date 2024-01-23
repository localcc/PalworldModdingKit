#pragma once
#include "CoreMinimal.h"
#include "PalAICombatModule.h"
#include "PalAICombatModule_Wild.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalAICombatModule_Wild : public UPalAICombatModule {
    GENERATED_BODY()
public:
    UPalAICombatModule_Wild();
    UFUNCTION(BlueprintCallable)
    void OnBattleFinish_forDelegate(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool JudgeReturnCombatStartPosition();
    
};


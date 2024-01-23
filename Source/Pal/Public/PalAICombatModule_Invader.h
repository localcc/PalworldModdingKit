#pragma once
#include "CoreMinimal.h"
#include "PalAICombatModule.h"
#include "PalAICombatModule_Invader.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalAICombatModule_Invader : public UPalAICombatModule {
    GENERATED_BODY()
public:
    UPalAICombatModule_Invader();
    UFUNCTION(BlueprintCallable)
    void OnBattleFinish_forDelegate(AActor* Actor);
    
};


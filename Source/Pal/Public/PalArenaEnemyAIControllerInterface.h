#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalArenaEnemyAIControllerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalArenaEnemyAIControllerInterface : public UInterface {
    GENERATED_BODY()
};

class IPalArenaEnemyAIControllerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartInBattle();
    
};


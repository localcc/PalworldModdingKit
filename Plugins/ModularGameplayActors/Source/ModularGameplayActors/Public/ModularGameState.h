#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "ModularGameState.generated.h"

UCLASS(Blueprintable)
class MODULARGAMEPLAYACTORS_API AModularGameState : public AGameState {
    GENERATED_BODY()
public:
    AModularGameState(const FObjectInitializer& ObjectInitializer);

};


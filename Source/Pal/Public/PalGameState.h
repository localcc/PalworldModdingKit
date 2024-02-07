#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PalGameState.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class APalGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    APalGameState(const FObjectInitializer& ObjectInitializer);

};


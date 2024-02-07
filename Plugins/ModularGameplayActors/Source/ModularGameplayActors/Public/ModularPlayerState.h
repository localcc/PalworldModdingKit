#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ModularPlayerState.generated.h"

UCLASS(Blueprintable)
class MODULARGAMEPLAYACTORS_API AModularPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    AModularPlayerState(const FObjectInitializer& ObjectInitializer);

};


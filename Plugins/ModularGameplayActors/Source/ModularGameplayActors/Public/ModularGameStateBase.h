#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ModularGameStateBase.generated.h"

UCLASS(Blueprintable)
class MODULARGAMEPLAYACTORS_API AModularGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    AModularGameStateBase(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ModularGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class MODULARGAMEPLAYACTORS_API AModularGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    AModularGameModeBase(const FObjectInitializer& ObjectInitializer);

};


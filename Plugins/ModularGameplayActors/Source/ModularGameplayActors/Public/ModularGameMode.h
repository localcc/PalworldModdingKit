#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "ModularGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class MODULARGAMEPLAYACTORS_API AModularGameMode : public AGameMode {
    GENERATED_BODY()
public:
    AModularGameMode(const FObjectInitializer& ObjectInitializer);

};


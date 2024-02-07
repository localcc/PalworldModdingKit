#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ModularCharacter.generated.h"

UCLASS(Blueprintable)
class MODULARGAMEPLAYACTORS_API AModularCharacter : public ACharacter {
    GENERATED_BODY()
public:
    AModularCharacter(const FObjectInitializer& ObjectInitializer);

};


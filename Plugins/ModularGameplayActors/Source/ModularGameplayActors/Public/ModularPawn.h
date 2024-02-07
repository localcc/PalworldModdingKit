#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ModularPawn.generated.h"

UCLASS(Blueprintable)
class MODULARGAMEPLAYACTORS_API AModularPawn : public APawn {
    GENERATED_BODY()
public:
    AModularPawn(const FObjectInitializer& ObjectInitializer);

};


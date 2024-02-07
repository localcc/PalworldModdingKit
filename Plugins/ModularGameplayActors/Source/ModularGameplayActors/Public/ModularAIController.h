#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "ModularAIController.generated.h"

UCLASS(Blueprintable)
class MODULARGAMEPLAYACTORS_API AModularAIController : public AAIController {
    GENERATED_BODY()
public:
    AModularAIController(const FObjectInitializer& ObjectInitializer);

};


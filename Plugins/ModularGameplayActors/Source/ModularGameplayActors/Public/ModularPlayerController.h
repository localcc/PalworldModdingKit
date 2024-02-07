#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ModularPlayerController.generated.h"

UCLASS(Blueprintable)
class MODULARGAMEPLAYACTORS_API AModularPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    AModularPlayerController(const FObjectInitializer& ObjectInitializer);

};


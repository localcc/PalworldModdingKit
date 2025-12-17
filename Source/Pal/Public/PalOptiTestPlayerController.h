#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PalOptiTestPlayerController.generated.h"

UCLASS(Blueprintable)
class PAL_API APalOptiTestPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    APalOptiTestPlayerController(const FObjectInitializer& ObjectInitializer);

};


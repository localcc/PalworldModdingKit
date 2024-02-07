#pragma once
#include "CoreMinimal.h"
#include "ModularPlayerController.h"
#include "CommonPlayerController.generated.h"

UCLASS(Blueprintable)
class COMMONGAME_API ACommonPlayerController : public AModularPlayerController {
    GENERATED_BODY()
public:
    ACommonPlayerController(const FObjectInitializer& ObjectInitializer);

};


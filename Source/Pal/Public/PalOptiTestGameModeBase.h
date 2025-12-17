#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PalOptiTestGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAL_API APalOptiTestGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    APalOptiTestGameModeBase(const FObjectInitializer& ObjectInitializer);

};


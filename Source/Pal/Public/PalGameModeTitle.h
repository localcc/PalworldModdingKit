#pragma once
#include "CoreMinimal.h"
#include "PalGameModeBase.h"
#include "PalGameModeTitle.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAL_API APalGameModeTitle : public APalGameModeBase {
    GENERATED_BODY()
public:
    APalGameModeTitle(const FObjectInitializer& ObjectInitializer);

};


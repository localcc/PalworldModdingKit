#pragma once
#include "CoreMinimal.h"
#include "PalGameModeBase.h"
#include "PalGameModeServerEntry.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAL_API APalGameModeServerEntry : public APalGameModeBase {
    GENERATED_BODY()
public:
    APalGameModeServerEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadLevel();
    
};


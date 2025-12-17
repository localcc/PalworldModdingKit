#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "PalOptiTestLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class PAL_API APalOptiTestLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    APalOptiTestLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};


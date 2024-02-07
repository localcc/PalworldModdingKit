#pragma once
#include "CoreMinimal.h"
#include "LevelInstance/LevelInstanceActor.h"
#include "PalLevelInstance.generated.h"

UCLASS(Blueprintable)
class PAL_API APalLevelInstance : public ALevelInstance {
    GENERATED_BODY()
public:
    APalLevelInstance(const FObjectInitializer& ObjectInitializer);

};


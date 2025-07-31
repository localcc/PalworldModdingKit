#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalBuildObjectChildActorVisualControlPartInterface.h"
#include "PalBuildObjectLabResearchSpace.generated.h"

UCLASS(Blueprintable)
class PAL_API APalBuildObjectLabResearchSpace : public AActor, public IPalBuildObjectChildActorVisualControlPartInterface {
    GENERATED_BODY()
public:
    APalBuildObjectLabResearchSpace(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


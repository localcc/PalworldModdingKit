#include "PalActionDummyTargetActor.h"
#include "Components/SceneComponent.h"

APalActionDummyTargetActor::APalActionDummyTargetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}



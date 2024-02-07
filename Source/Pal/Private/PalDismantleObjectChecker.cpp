#include "PalDismantleObjectChecker.h"
#include "Components/SceneComponent.h"

APalDismantleObjectChecker::APalDismantleObjectChecker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TargetBuildObject = NULL;
}

APalBuildObject* APalDismantleObjectChecker::GetTargetObject() {
    return NULL;
}



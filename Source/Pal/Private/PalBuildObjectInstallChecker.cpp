#include "PalBuildObjectInstallChecker.h"
#include "Components/SceneComponent.h"

APalBuildObjectInstallChecker::APalBuildObjectInstallChecker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Tags.AddDefaulted(1);
    this->TargetBuildObject = NULL;
    this->OverlapCheckComponent = NULL;
    this->OverlapChecker = NULL;
    this->InstallStrategy = NULL;
}



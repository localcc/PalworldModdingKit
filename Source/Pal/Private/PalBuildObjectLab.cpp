#include "PalBuildObjectLab.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "PalMapObjectLabModel.h"

APalBuildObjectLab::APalBuildObjectLab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ConcreteModelClass = UPalMapObjectLabModel::StaticClass();
    this->ResearchSpaceVisualComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ResearchSpaceVisualComponent"));
    this->ResearchSpaceVisualComponent->SetupAttachment(RootComponent);
}

void APalBuildObjectLab::OnUpdateCurrentResearch_ServerInternal(UPalMapObjectLabModel* Model) {
}

void APalBuildObjectLab::OnSetConcreteModelAfterAvailable(UPalMapObjectConcreteModelBase* ConcreteModel) {
}



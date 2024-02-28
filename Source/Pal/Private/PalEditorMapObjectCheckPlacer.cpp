#include "PalEditorMapObjectCheckPlacer.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"

APalEditorMapObjectCheckPlacer::APalEditorMapObjectCheckPlacer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->LeftEdgeArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("LeftEdgeArrow"));
    this->RightEdgeArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("WidthEdgeArrow"));
    this->StackRowArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("StackRowArrow"));
    this->LeftEdgeArrow->SetupAttachment(RootComponent);
    this->RightEdgeArrow->SetupAttachment(RootComponent);
    this->StackRowArrow->SetupAttachment(RootComponent);
}

void APalEditorMapObjectCheckPlacer::PlaceMapObjects() {
}



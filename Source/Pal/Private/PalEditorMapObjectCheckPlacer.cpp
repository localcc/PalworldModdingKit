#include "PalEditorMapObjectCheckPlacer.h"
#include "Components/ArrowComponent.h"

void APalEditorMapObjectCheckPlacer::PlaceMapObjects() {
}

APalEditorMapObjectCheckPlacer::APalEditorMapObjectCheckPlacer() {
    this->LeftEdgeArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("LeftEdgeArrow"));
    this->RightEdgeArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("WidthEdgeArrow"));
    this->StackRowArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("StackRowArrow"));
}


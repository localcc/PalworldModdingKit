#include "PalHiddenAreaBox.h"
#include "PalHiddenBoxComponent.h"

APalHiddenAreaBox::APalHiddenAreaBox() {
    this->HiddenBoxComponent = CreateDefaultSubobject<UPalHiddenBoxComponent>(TEXT("HiddenBoxComponent"));
}


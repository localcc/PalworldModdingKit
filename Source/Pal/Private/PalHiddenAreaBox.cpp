#include "PalHiddenAreaBox.h"
#include "PalHiddenBoxComponent.h"

APalHiddenAreaBox::APalHiddenAreaBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPalHiddenBoxComponent>(TEXT("HiddenBoxComponent"));
    this->HiddenBoxComponent = (UPalHiddenBoxComponent*)RootComponent;
}



#include "PalHitCollisionBox.h"
#include "Components/BoxComponent.h"

APalHitCollisionBox::APalHitCollisionBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
}

void APalHitCollisionBox::DrawHitCollision() {
}



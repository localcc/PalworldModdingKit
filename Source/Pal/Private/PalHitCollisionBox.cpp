#include "PalHitCollisionBox.h"
#include "Components/BoxComponent.h"

void APalHitCollisionBox::DrawHitCollision() {
}

APalHitCollisionBox::APalHitCollisionBox() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
}


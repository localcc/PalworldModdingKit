#include "PalHitCollisionSphere.h"
#include "Components/SphereComponent.h"

APalHitCollisionSphere::APalHitCollisionSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->SphereComponent = (USphereComponent*)RootComponent;
}

void APalHitCollisionSphere::DrawHitCollision() {
}



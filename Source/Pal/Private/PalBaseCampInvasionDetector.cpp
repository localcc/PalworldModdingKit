#include "PalBaseCampInvasionDetector.h"
#include "Components/CapsuleComponent.h"

APalBaseCampInvasionDetector::APalBaseCampInvasionDetector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
}

void APalBaseCampInvasionDetector::SetupCollisionParameters(float CapsuleRadius, float CapsuleHalfHeight) {
}

void APalBaseCampInvasionDetector::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APalBaseCampInvasionDetector::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



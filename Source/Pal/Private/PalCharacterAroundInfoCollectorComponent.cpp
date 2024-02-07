#include "PalCharacterAroundInfoCollectorComponent.h"

UPalCharacterAroundInfoCollectorComponent::UPalCharacterAroundInfoCollectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->ShapeBodySetup = NULL;
}

void UPalCharacterAroundInfoCollectorComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPalCharacterAroundInfoCollectorComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



#include "PalCharacterAroundInfoCollectorComponent.h"

UPalCharacterAroundInfoCollectorComponent::UPalCharacterAroundInfoCollectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
}

void UPalCharacterAroundInfoCollectorComponent::OnSetMapObjectModel(APalMapObject* MapObject) {
}

void UPalCharacterAroundInfoCollectorComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPalCharacterAroundInfoCollectorComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



#include "PalHiddenBoxComponent.h"

UPalHiddenBoxComponent::UPalHiddenBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalHiddenBoxComponent::EndOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPalHiddenBoxComponent::BeginOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



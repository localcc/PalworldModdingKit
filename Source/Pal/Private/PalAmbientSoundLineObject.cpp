#include "PalAmbientSoundLineObject.h"

void UPalAmbientSoundLineObject::OnActivateTriggerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UPalAmbientSoundLineObject::OnActivateTriggerLineOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

UPalAmbientSoundLineObject::UPalAmbientSoundLineObject() {
    this->ActivateTrigger = NULL;
    this->AkComponent = NULL;
}


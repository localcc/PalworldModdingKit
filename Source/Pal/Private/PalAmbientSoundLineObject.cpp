#include "PalAmbientSoundLineObject.h"

UPalAmbientSoundLineObject::UPalAmbientSoundLineObject() {
    this->ActivateTrigger = NULL;
    this->AkComponent = NULL;
}

void UPalAmbientSoundLineObject::OnActivateTriggerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UPalAmbientSoundLineObject::OnActivateTriggerLineOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}



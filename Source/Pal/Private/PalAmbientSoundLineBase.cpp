#include "PalAmbientSoundLineBase.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"

APalAmbientSoundLineBase::APalAmbientSoundLineBase() {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ActivateTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ActivateTrigger"));
    this->AmbinetSoundLineObject = NULL;
}


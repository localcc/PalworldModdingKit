#include "PalAmbientSoundLineBase.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

APalAmbientSoundLineBase::APalAmbientSoundLineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ActivateTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ActivateTrigger"));
    this->AmbinetSoundLineObject = NULL;
}



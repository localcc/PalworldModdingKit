#include "PalAmbientSoundLineBase.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

APalAmbientSoundLineBase::APalAmbientSoundLineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ActivateTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ActivateTrigger"));
    this->AmbinetSoundLineObject = NULL;
    this->ActivateTrigger->SetupAttachment(RootComponent);
}



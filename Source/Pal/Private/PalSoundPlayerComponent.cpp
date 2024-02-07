#include "PalSoundPlayerComponent.h"

UPalSoundPlayerComponent::UPalSoundPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PalSoundSlotCache = NULL;
}

void UPalSoundPlayerComponent::BeginPlay() {
}



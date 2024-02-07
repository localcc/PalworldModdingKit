#include "PalAudioSettingSystem.h"

UPalAudioSettingSystem::UPalAudioSettingSystem() {
}


void UPalAudioSettingSystem::StartAudioFade(EPalAudioBus AudioBus, EPalAudioFadeType FadeType, bool bImmediately) {
}

void UPalAudioSettingSystem::SetAudioBusVolume_Implementation(EPalAudioBus AudioBus, const FName& Key, float Volume) {
}


FString UPalAudioSettingSystem::PalAudioBusToString(EPalAudioBus AudioBus) const {
    return TEXT("");
}


void UPalAudioSettingSystem::Initialize_Implementation() {
}

float UPalAudioSettingSystem::GetAudioBusVolume(EPalAudioBus AudioBus) const {
    return 0.0f;
}



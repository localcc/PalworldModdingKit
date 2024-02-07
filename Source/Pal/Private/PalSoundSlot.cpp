#include "PalSoundSlot.h"

UPalSoundSlot::UPalSoundSlot() {
    this->SoundPlayer = NULL;
}

void UPalSoundSlot::Terminate_Implementation() {
}

void UPalSoundSlot::StopSoundBySoundId(const FPalDataTableRowName_SoundID& SoundId) {
}

void UPalSoundSlot::StopSound() {
}

void UPalSoundSlot::StopByPlayingId(int32 PlayingID) {
}

void UPalSoundSlot::SetSwitch(const FString& SwitchGroup, const FString& SwitchState) {
}

void UPalSoundSlot::SetRTPCValue(const FName& Name, float Value, float interpolSec) {
}

void UPalSoundSlot::SetPhysicalMaterial(TEnumAsByte<EPhysicalSurface> PhysicalSurface) {
}

int32 UPalSoundSlot::PlaySoundByAkEvent(UAkAudioEvent* AkEvent, const FPalSoundOptions& Options) {
    return 0;
}

int32 UPalSoundSlot::PlaySound(const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Options) {
    return 0;
}

void UPalSoundSlot::OnAkPostEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

bool UPalSoundSlot::IsPlayingBySoundId(const FPalDataTableRowName_SoundID& SoundId) const {
    return false;
}

void UPalSoundSlot::Initialize_Implementation() {
}

UPalSoundPlayer* UPalSoundSlot::GetSoundPlayer() const {
    return NULL;
}

UAkAudioEvent* UPalSoundSlot::GetAkEvent(const FPalDataTableRowName_SoundID& ID) {
    return NULL;
}



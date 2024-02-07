#include "PalAudioWorldSubsystem.h"

UPalAudioWorldSubsystem::UPalAudioWorldSubsystem() {
    this->FadeDuration = 1000;
    this->SoundPlayer = NULL;
}


void UPalAudioWorldSubsystem::StopSound() {
}

void UPalAudioWorldSubsystem::SetSwitch(const FString& SwitchGroup, const FString& SwitchState) {
}

void UPalAudioWorldSubsystem::SetStateFlagByName(FName StateGroup, bool flg) {
}

void UPalAudioWorldSubsystem::SetStateFlagByEnum(EPalAudioStateGroup StateGroup, bool flg) {
}

void UPalAudioWorldSubsystem::SetStateByName(FName StateGroup, FName State) {
}

void UPalAudioWorldSubsystem::SetStateByEnum(EPalAudioStateGroup StateGroup, EPalAudioState State) {
}

void UPalAudioWorldSubsystem::SetSoundPlayerLocation(const FVector& Location) {
}

void UPalAudioWorldSubsystem::SetRTPCValueByName(const FName& Name, float Value, float interpolSec) {
}

void UPalAudioWorldSubsystem::SetRTPCValueByEnum(EPalAudioRTPC RTPC, float Value, float interpolSec) {
}

void UPalAudioWorldSubsystem::SetOutputBusVolume(float Volume) {
}

void UPalAudioWorldSubsystem::PostTriggerByString(const FString& Trigger) {
}

void UPalAudioWorldSubsystem::PostTriggerByEnum(EPalAudioTrigger Trigger) {
}

int32 UPalAudioWorldSubsystem::PlaySound(UAkAudioEvent* AudioEvent, const FPalSoundOptions& Options) {
    return 0;
}









void UPalAudioWorldSubsystem::OnAkPostEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void UPalAudioWorldSubsystem::InitializeSystem(AActor* AkOwnerActor) {
}

void UPalAudioWorldSubsystem::GetSoundPlayerLocation(FVector& OutLocation) const {
}

void UPalAudioWorldSubsystem::FadeOutByPlayingId(int32 PlayingID) {
}




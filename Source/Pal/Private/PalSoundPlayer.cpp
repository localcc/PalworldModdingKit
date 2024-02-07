#include "PalSoundPlayer.h"

UPalSoundPlayer::UPalSoundPlayer() {
    this->StopWhenOwnerDestroyed = false;
    this->OwnerComponent = NULL;
    this->AkComponent = NULL;
}

void UPalSoundPlayer::UpdateOutputBusBolume() {
}

void UPalSoundPlayer::Terminate() {
}

void UPalSoundPlayer::StopSound() {
}

void UPalSoundPlayer::StopByPlayingId(int32 PlayingID) {
}

void UPalSoundPlayer::SetWorldLocation(const FVector& Location) {
}

void UPalSoundPlayer::SetSwitch(const FString& SwitchGroup, const FString& SwitchState) {
}

void UPalSoundPlayer::SetRTPCValue(const FName& Name, float Value, float interpolSec) {
}

void UPalSoundPlayer::SetPhysicalMaterial(TEnumAsByte<EPhysicalSurface> PhysicalSurface) {
}

void UPalSoundPlayer::SetOutputBusVolume(FName Name, float Volume) {
}

void UPalSoundPlayer::SetOcclusionRefreshInterval(float Interval) {
}

void UPalSoundPlayer::PostTrigger(const FString& Trigger) {
}

int32 UPalSoundPlayer::PlaySound(UAkAudioEvent* AudioEvent, const FPalSoundOptions& Options) {
    return 0;
}

void UPalSoundPlayer::OnAkPostEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void UPalSoundPlayer::Initialize() {
}

FVector UPalSoundPlayer::GetWorldLocation() {
    return FVector{};
}

FRotator UPalSoundPlayer::GetOwnerRotation() {
    return FRotator{};
}

FVector UPalSoundPlayer::GetOwnerLocation() {
    return FVector{};
}

bool UPalSoundPlayer::GetOutputBusVolume(FName Name, float& Volume) {
    return false;
}

void UPalSoundPlayer::FadeOutByPlayingId(int32 PlayingID, int32 FadeOutDuration) {
}

void UPalSoundPlayer::ClearOutputBusVolume(FName Name) {
}



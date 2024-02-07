#include "PalSoundUtility.h"

UPalSoundUtility::UPalSoundUtility() {
}

void UPalSoundUtility::StopSoundByActorWithSoundId(AActor* Actor, const FPalDataTableRowName_SoundID& ID) {
}

void UPalSoundUtility::StopSoundByActor_Editor(AActor* Actor) {
}

void UPalSoundUtility::StopSoundByActor(AActor* Actor) {
}

APalSoundDebugModel* UPalSoundUtility::SpawnSoundDebugModel(UAkAudioEvent* AudioEvent, const FVector& Location, const FRotator& Rotation, UObject* WorldObject) {
    return NULL;
}

void UPalSoundUtility::SetSwitchByActor(AActor* Actor, const FString& SwitchGroup, const FString& SwitchState) {
}

void UPalSoundUtility::SetRTPCValueByActor(AActor* Actor, const FName Name, float Value, float interpolSec) {
}

void UPalSoundUtility::SetPhysicalMaterial(AActor* Actor, TEnumAsByte<EPhysicalSurface> PhysicalSurface) {
}

void UPalSoundUtility::PlaySoundByActor_Editor(AActor* Actor, const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Option, TSoftClassPtr<UPalSoundSlot> SoundSlotClass, TEnumAsByte<EPhysicalSurface> PhysicalSurface) {
}

void UPalSoundUtility::PlaySoundByActor(AActor* Actor, const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Option) {
}

bool UPalSoundUtility::PlayAkEventSoundByActor(AActor* Actor, UAkAudioEvent* AkEvent) {
    return false;
}

void UPalSoundUtility::IsSoundPlayingByActor(AActor* Actor, const FPalDataTableRowName_SoundID& ID, UPalSoundUtility::FPalSoundUtilityBoolCallbackFunction cb) {
}



#include "PalSoundPlayerInEditorComponent.h"

UPalSoundPlayerInEditorComponent::UPalSoundPlayerInEditorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->PalSoundSlotCache = NULL;
}

void UPalSoundPlayerInEditorComponent::SetPhysicalMaterial(TEnumAsByte<EPhysicalSurface> PhysicalSurface) {
}



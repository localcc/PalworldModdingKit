#include "PalInteractLockSettingComponent.h"

UPalInteractLockSettingComponent::UPalInteractLockSettingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalInteractLockSettingComponent::ShowDialog_LocalPlayer() {
}

bool UPalInteractLockSettingComponent::IsLocked(const FGuid& PlayerUId) const {
    return false;
}



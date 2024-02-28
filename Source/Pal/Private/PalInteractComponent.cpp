#include "PalInteractComponent.h"

UPalInteractComponent::UPalInteractComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalInteractComponent::TerminateInteract() {
}

void UPalInteractComponent::StartTriggerInteract(EPalInteractiveObjectActionType ActionType, bool IsToggle) {
}

void UPalInteractComponent::SetEnableInteractByFlagName_Implementation(const FName& flagName, const bool bEnable, const bool bTerminateInteractIfDisable) {
}

void UPalInteractComponent::SetEnableInteract(const bool bEnable, const bool bTerminateInteractIfDisable) {
}

void UPalInteractComponent::OnEnableInteract(TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

bool UPalInteractComponent::IsToggleInteracting() const {
    return false;
}

bool UPalInteractComponent::IsInteracting() const {
    return false;
}

bool UPalInteractComponent::IsEnableInteract() const {
    return false;
}

EPalInteractiveObjectActionType UPalInteractComponent::GetTriggeringActionType() const {
    return EPalInteractiveObjectActionType::None;
}

void UPalInteractComponent::EndTriggerInteract(EPalInteractiveObjectActionType ActionType) {
}



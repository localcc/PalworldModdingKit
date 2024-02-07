#include "PalInteractComponent.h"

UPalInteractComponent::UPalInteractComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalInteractComponent::TerminateInteract() {
}

void UPalInteractComponent::StartTriggerInteract(EPalInteractiveObjectActionType ActionType) {
}

void UPalInteractComponent::SetEnableInteractByFlagName_Implementation(const FName& flagName, const bool bEnable, const bool bTerminateInteractIfDisable) {
}

void UPalInteractComponent::SetEnableInteract(const bool bEnable, const bool bTerminateInteractIfDisable) {
}

void UPalInteractComponent::OnEnableInteract(TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

bool UPalInteractComponent::IsInteracting() {
    return false;
}

bool UPalInteractComponent::IsEnableInteract() const {
    return false;
}

void UPalInteractComponent::EndTriggerInteract(EPalInteractiveObjectActionType ActionType) {
}



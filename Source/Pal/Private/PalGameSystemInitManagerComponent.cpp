#include "PalGameSystemInitManagerComponent.h"

void UPalGameSystemInitManagerComponent::OnChangeProcessState(UPalGameSystemInitProcessHandle* ChangedProcessHandle) {
}

void UPalGameSystemInitManagerComponent::OnChangeProcessProgressRate(UPalGameSystemInitProcessHandle* ChangedProcessHandle) {
}

UPalGameSystemInitManagerComponent::UPalGameSystemInitManagerComponent() : UGameStateComponent(FObjectInitializer()) {
    this->CurrentSequenceIndex = -1;
}


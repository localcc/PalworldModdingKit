#include "PalGameSystemInitManagerComponent.h"

UPalGameSystemInitManagerComponent::UPalGameSystemInitManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanReferToWorldObject = false;
    this->CurrentSequenceIndex = -1;
}

void UPalGameSystemInitManagerComponent::OnChangeProcessState(UPalGameSystemInitProcessHandle* ChangedProcessHandle) {
}

void UPalGameSystemInitManagerComponent::OnChangeProcessProgressRate(UPalGameSystemInitProcessHandle* ChangedProcessHandle) {
}



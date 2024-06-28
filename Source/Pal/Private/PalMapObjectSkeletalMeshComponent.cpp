#include "PalMapObjectSkeletalMeshComponent.h"

UPalMapObjectSkeletalMeshComponent::UPalMapObjectSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAnimateInWorking = false;
}

void UPalMapObjectSkeletalMeshComponent::OnReadyWork(UPalMapObjectWorkeeModule* Module, UPalWorkBase* Work) {
}

void UPalMapObjectSkeletalMeshComponent::OnReadyModule_Workee(UPalMapObjectConcreteModelBase* ConcreteModel, UPalMapObjectConcreteModelModuleBase* Module) {
}

void UPalMapObjectSkeletalMeshComponent::OnChangeWorkInProgress(UPalWorkProgress* WorkProgress) {
}



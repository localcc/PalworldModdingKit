#include "PalMapObjectSkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectSkeletalMeshComponent::UPalMapObjectSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAnimateInWorking = false;
    this->bAnimating = false;
}

void UPalMapObjectSkeletalMeshComponent::OnWorkEnded(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalMapObjectSkeletalMeshComponent::OnWorkDisposed(UPalWorkBase* Work) {
}

void UPalMapObjectSkeletalMeshComponent::OnUpdateAssignedCharacter(UPalWorkBase* Work) {
}

void UPalMapObjectSkeletalMeshComponent::OnRep_bAnimating() {
}

void UPalMapObjectSkeletalMeshComponent::OnReadyWork(UPalMapObjectWorkeeModule* Module, UPalWorkBase* Work) {
}

void UPalMapObjectSkeletalMeshComponent::OnReadyModule_Workee(UPalMapObjectConcreteModelBase* ConcreteModel, UPalMapObjectConcreteModelModuleBase* Module) {
}

void UPalMapObjectSkeletalMeshComponent::OnChangedInProgress(UPalWorkProgress* WorkProgress) {
}

void UPalMapObjectSkeletalMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectSkeletalMeshComponent, bAnimating);
}



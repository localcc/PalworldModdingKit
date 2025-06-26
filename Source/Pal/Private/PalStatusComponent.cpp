#include "PalStatusComponent.h"
#include "Net/UnrealNetwork.h"

UPalStatusComponent::UPalStatusComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalStatusComponent::SomeStatus_ToAll_Implementation(EPalStatusID statusID, FStatusDynamicParameter Param) {
}

void UPalStatusComponent::SetDisableAddStatusIDs(TArray<EPalStatusID> StatusIDs) {
}

void UPalStatusComponent::ResetDisableAddStatusIDs() {
}

void UPalStatusComponent::RemoveStatus_ToServer_Implementation(EPalStatusID statusID, int32 issuerID) {
}

void UPalStatusComponent::RemoveStatus(EPalStatusID statusID) {
}

void UPalStatusComponent::RemoveAll() {
}

void UPalStatusComponent::OnRep_ExecutionStatusList() {
}

UPalStatusBase* UPalStatusComponent::GetExecutionStatusCache(EPalStatusID statusID) {
    return NULL;
}

UPalStatusBase* UPalStatusComponent::GetExecutionStatus(EPalStatusID statusID) {
    return NULL;
}

void UPalStatusComponent::BeginPlay() {
}

void UPalStatusComponent::AddStatusParameter(EPalStatusID statusID, FStatusDynamicParameter Param) {
}

void UPalStatusComponent::AddStatus_ToServer_Implementation(EPalStatusID statusID, FStatusDynamicParameter Param, int32 issuerID) {
}

void UPalStatusComponent::AddStatus(EPalStatusID statusID) {
}

void UPalStatusComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStatusComponent, ExecutionStatusList);
}



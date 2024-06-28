#include "PalIncidentBase.h"

UPalIncidentBase::UPalIncidentBase() {
    this->ParentIncident = NULL;
    this->DynamicParameter = NULL;
    this->bForceStop = false;
    this->OccuredObject = NULL;
    this->OwnerObject = NULL;
    this->ExecState = EPalIncidentState::None;
}

void UPalIncidentBase::Tick_Implementation(float DeltaTime) {
}

void UPalIncidentBase::Start() {
}

void UPalIncidentBase::SetDynamicParameter(UPalIncidentDynamicParameter* Parameter) {
}

int32 UPalIncidentBase::RequestConsumeInventoryItem(UPalPlayerInventoryData* InventoryData, FName ItemId, int32 ConsumeNum) {
    return 0;
}



void UPalIncidentBase::OnForceStop_Implementation() {
}



void UPalIncidentBase::OnCanceled_Implementation() {
}

void UPalIncidentBase::OnBegin_Implementation() {
}

bool UPalIncidentBase::IsInitialized() const {
    return false;
}

bool UPalIncidentBase::IsExecuting() const {
    return false;
}

bool UPalIncidentBase::IsCompleted() const {
    return false;
}

bool UPalIncidentBase::IsCanceled() const {
    return false;
}

bool UPalIncidentBase::HasOption(const FName& Option) const {
    return false;
}

UPalIncidentBase* UPalIncidentBase::GetRootIncident() const {
    return NULL;
}

UPalIncidentBase* UPalIncidentBase::GetParentIncident() const {
    return NULL;
}

UObject* UPalIncidentBase::GetOwner() const {
    return NULL;
}

UObject* UPalIncidentBase::GetOccuredObject() const {
    return NULL;
}

FName UPalIncidentBase::GetIncidentType() const {
    return NAME_None;
}

FName UPalIncidentBase::GetIncidentId() const {
    return NAME_None;
}

UPalIncidentDynamicParameter* UPalIncidentBase::GetDynamicParameter() const {
    return NULL;
}

TArray<FName> UPalIncidentBase::GetArgs() const {
    return TArray<FName>();
}

FName UPalIncidentBase::GetArg(int32 Index) const {
    return NAME_None;
}

void UPalIncidentBase::ForceStop() {
}

void UPalIncidentBase::Finish() {
}

void UPalIncidentBase::DropItem(FName ItemId, int32 DropNum, FVector SpawnLocation, FVector ReleaseDirection) {
}



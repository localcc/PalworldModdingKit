#include "PalStatusBase.h"
#include "Net/UnrealNetwork.h"

UPalStatusBase::UPalStatusBase() {
    this->bIsEndStatus = false;
    this->StatusId = EPalStatusID::None;
    this->Duration = -1.00f;
    this->bIsNerverEnd = false;
}

void UPalStatusBase::TickStatus_Implementation(float DeltaTime) {
}

void UPalStatusBase::SetHalfDurationTimer() {
}

void UPalStatusBase::OnEndStatus_Implementation() {
}

void UPalStatusBase::OnBreakStatus_Implementation() {
}

void UPalStatusBase::OnBeginStatus_Implementation() {
}

void UPalStatusBase::OnBeginSomeStatus_Implementation() {
}

bool UPalStatusBase::IsEndStatus_Implementation() const {
    return false;
}

AActor* UPalStatusBase::GetOwner() const {
    return NULL;
}

void UPalStatusBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStatusBase, DynamicParameter);
    DOREPLIFETIME(UPalStatusBase, StatusId);
}



#include "PalWorkProgress.h"
#include "Net/UnrealNetwork.h"

UPalWorkProgress::UPalWorkProgress() {
    this->RequiredWorkAmount = 0.00f;
    this->CurrentWorkAmount = 0.00f;
    this->CurrentWorkAmountByLocalPlayer = 0.00f;
    this->WorkExp = 0;
    this->AutoWorkSelfAmountBySec = 0.00f;
    this->bNotAllowReactionOnWorkComplete = false;
    this->ProgressTimeSinceLastTick = 0.00f;
    this->bInProgress = false;
}

void UPalWorkProgress::OnRep_InProgress() {
}

void UPalWorkProgress::OnRep_CurrentWorkAmount() {
}

bool UPalWorkProgress::IsCompleted() const {
    return false;
}

float UPalWorkProgress::GetRequiredWorkAmount() const {
    return 0.0f;
}

int32 UPalWorkProgress::GetRemainWorkPredicateTime() const {
    return 0;
}

float UPalWorkProgress::GetRemainWorkAmount() const {
    return 0.0f;
}

float UPalWorkProgress::GetProgressRate() const {
    return 0.0f;
}

float UPalWorkProgress::GetCurrentWorkAmount() const {
    return 0.0f;
}

void UPalWorkProgress::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkProgress, RequiredWorkAmount);
    DOREPLIFETIME(UPalWorkProgress, CurrentWorkAmount);
    DOREPLIFETIME(UPalWorkProgress, WorkingPlayerUIds);
    DOREPLIFETIME(UPalWorkProgress, AutoWorkSelfAmountBySec);
    DOREPLIFETIME(UPalWorkProgress, bInProgress);
}



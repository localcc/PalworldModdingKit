#include "PalLocationPointBaseCamp.h"
#include "Net/UnrealNetwork.h"

UPalLocationPointBaseCamp::UPalLocationPointBaseCamp() {
    this->bIsAvailable = false;
}

void UPalLocationPointBaseCamp::SetAvailable() {
}

void UPalLocationPointBaseCamp::OnDisposeTarget(UPalBaseCampModel* Model) {
}

bool UPalLocationPointBaseCamp::IsSameGuildWithPlayer(FGuid PlayerUId) const {
    return false;
}

FGuid UPalLocationPointBaseCamp::GetBaseCampId() const {
    return FGuid{};
}

void UPalLocationPointBaseCamp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPointBaseCamp, BaseCampId);
    DOREPLIFETIME(UPalLocationPointBaseCamp, bIsAvailable);
}



#include "PalLocationPointBaseCamp.h"
#include "Net/UnrealNetwork.h"

UPalLocationPointBaseCamp::UPalLocationPointBaseCamp() {
    this->bIsAvailable = false;
    this->PvPItemCount = 0;
}

void UPalLocationPointBaseCamp::SetAvailable() {
}

void UPalLocationPointBaseCamp::OnTimerEvent_CountPvPItem() {
}

void UPalLocationPointBaseCamp::OnDisposeTarget(UPalBaseCampModel* Model) {
}

bool UPalLocationPointBaseCamp::IsSameGuildWithPlayer(FGuid PlayerUId) const {
    return false;
}

int32 UPalLocationPointBaseCamp::GetPvPItemNum() const {
    return 0;
}

FGuid UPalLocationPointBaseCamp::GetBaseCampId() const {
    return FGuid{};
}

void UPalLocationPointBaseCamp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPointBaseCamp, BaseCampId);
    DOREPLIFETIME(UPalLocationPointBaseCamp, bIsAvailable);
    DOREPLIFETIME(UPalLocationPointBaseCamp, PvPItemCount);
}



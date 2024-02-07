#include "PalLocationBase.h"
#include "Net/UnrealNetwork.h"

UPalLocationBase::UPalLocationBase() {
    this->bShouldDisplay = true;
    this->bShowInMap = false;
    this->bShowInCompass = false;
}

bool UPalLocationBase::ShouldDisplay() const {
    return false;
}

UPalLocationPoint* UPalLocationBase::LocationPoint() {
    return NULL;
}

bool UPalLocationBase::IsShowInMap() const {
    return false;
}

bool UPalLocationBase::IsShowInCompass() const {
    return false;
}

bool UPalLocationBase::IsRequestedPlayer(const FGuid& LocalPlayerUId) {
    return false;
}

EPalLocationType UPalLocationBase::GetType() const {
    return EPalLocationType::Undefined;
}

void UPalLocationBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationBase, CalledPlayerUId);
    DOREPLIFETIME(UPalLocationBase, ID);
    DOREPLIFETIME(UPalLocationBase, bShouldDisplay);
    DOREPLIFETIME(UPalLocationBase, bShowInMap);
    DOREPLIFETIME(UPalLocationBase, bShowInCompass);
}



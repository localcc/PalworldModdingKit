#include "PalContainerBase.h"
#include "Net/UnrealNetwork.h"

UPalContainerBase::UPalContainerBase() {
    this->OperationRestrictType = EPalContainerOperationRestrictType::None;
    this->bIgnoreOnSave = false;
}

bool UPalContainerBase::IsEmpty() const {
    return false;
}

FPalContainerId UPalContainerBase::GetId() const {
    return FPalContainerId{};
}

void UPalContainerBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalContainerBase, ID);
    DOREPLIFETIME(UPalContainerBase, OperationRestrictType);
}



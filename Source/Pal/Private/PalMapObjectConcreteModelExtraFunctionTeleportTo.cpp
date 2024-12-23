#include "PalMapObjectConcreteModelExtraFunctionTeleportTo.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectConcreteModelExtraFunctionTeleportTo::UPalMapObjectConcreteModelExtraFunctionTeleportTo() {
    this->ActionType = EPalInteractiveObjectActionType::Interact1;
}

void UPalMapObjectConcreteModelExtraFunctionTeleportTo::Setup_ServerInternal(const EPalInteractiveObjectActionType InActionType, const FGuid& InLocationIdTeleportTo) {
}

void UPalMapObjectConcreteModelExtraFunctionTeleportTo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectConcreteModelExtraFunctionTeleportTo, ActionType);
}



#include "PalMapObjectConcreteModelExtraFunctionEnterRoom.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectConcreteModelExtraFunctionEnterRoom::UPalMapObjectConcreteModelExtraFunctionEnterRoom() {
    this->ActionType = EPalInteractiveObjectActionType::Interact1;
}

void UPalMapObjectConcreteModelExtraFunctionEnterRoom::Setup_ServerInternal(const EPalInteractiveObjectActionType InActionType, UDataLayerAsset* InDataLayerAsset) {
}

void UPalMapObjectConcreteModelExtraFunctionEnterRoom::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectConcreteModelExtraFunctionEnterRoom, ActionType);
}



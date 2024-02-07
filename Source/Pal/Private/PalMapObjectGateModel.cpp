#include "PalMapObjectGateModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectGateModel::UPalMapObjectGateModel() {
}

void UPalMapObjectGateModel::RequestTrigger_ServerInternal(const int32 RequestPlayerId, const int32 ToStateInt) {
}

void UPalMapObjectGateModel::OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

void UPalMapObjectGateModel::OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

void UPalMapObjectGateModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectGateModel, UnlockDateTime);
}



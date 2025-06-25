#include "PalMapObjectInstantEffectModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectInstantEffectModel::UPalMapObjectInstantEffectModel() {
    this->bEnableInteract = false;
}

void UPalMapObjectInstantEffectModel::RequestInstantEffect_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectInstantEffectModel::RequestInstantEffect() {
}

void UPalMapObjectInstantEffectModel::OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

void UPalMapObjectInstantEffectModel::OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

void UPalMapObjectInstantEffectModel::OnEnableTriggerInteract(TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

void UPalMapObjectInstantEffectModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectInstantEffectModel, bEnableInteract);
    DOREPLIFETIME(UPalMapObjectInstantEffectModel, AuthorizedPlayerUid);
}



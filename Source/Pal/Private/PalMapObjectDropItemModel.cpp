#include "PalMapObjectDropItemModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectDropItemModel::UPalMapObjectDropItemModel() {
    this->bEnableInteract = false;
}

void UPalMapObjectDropItemModel::OnUpdateItemContainerContentInServer(UPalItemContainer* Container) {
}

void UPalMapObjectDropItemModel::OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

void UPalMapObjectDropItemModel::OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

void UPalMapObjectDropItemModel::OnEnableTriggerInteract(TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

void UPalMapObjectDropItemModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectDropItemModel, ItemId);
    DOREPLIFETIME(UPalMapObjectDropItemModel, bEnableInteract);
}



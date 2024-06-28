#include "PalMapObjectStaticMeshComponentHiddenInNoItem.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectStaticMeshComponentHiddenInNoItem::UPalMapObjectStaticMeshComponentHiddenInNoItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bExistsItems = false;
}

void UPalMapObjectStaticMeshComponentHiddenInNoItem::OnUpdateItemContainerContents(UPalMapObjectItemContainerModule* Module) {
}

void UPalMapObjectStaticMeshComponentHiddenInNoItem::OnSetConcreteModel_ServerInternal(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void UPalMapObjectStaticMeshComponentHiddenInNoItem::OnRep_ExistsItems() {
}

void UPalMapObjectStaticMeshComponentHiddenInNoItem::OnReadyModule_ServerInternal(UPalMapObjectConcreteModelBase* Model, UPalMapObjectConcreteModelModuleBase* Module) {
}

void UPalMapObjectStaticMeshComponentHiddenInNoItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectStaticMeshComponentHiddenInNoItem, bExistsItems);
}



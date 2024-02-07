#include "PalBaseCampModuleItemStorage.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampModuleItemStorage::UPalBaseCampModuleItemStorage() {
}

void UPalBaseCampModuleItemStorage::OnUpdateItemContainer(UPalMapObjectItemContainerModule* ItemContainerModule) {
}

void UPalBaseCampModuleItemStorage::OnNotAvailableConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void UPalBaseCampModuleItemStorage::OnAvailableConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void UPalBaseCampModuleItemStorage::GetContainerIds(TArray<FPalContainerId>& OutContainerIds) const {
}

void UPalBaseCampModuleItemStorage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampModuleItemStorage, ContainerInfos);
}



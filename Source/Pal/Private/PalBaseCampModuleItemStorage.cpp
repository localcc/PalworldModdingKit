#include "PalBaseCampModuleItemStorage.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampModuleItemStorage::UPalBaseCampModuleItemStorage() {
}

void UPalBaseCampModuleItemStorage::OnUpdateItemContainerModule(UPalMapObjectItemContainerModule* ItemContainerModule) {
}

void UPalBaseCampModuleItemStorage::OnUpdateItemContainer(UPalItemContainer* ItemContainer) {
}

void UPalBaseCampModuleItemStorage::OnReadyItemContainerGuildChest(TScriptInterface<IPalMapObjectItemContainerAccessInterface> ItemContainerAccess) {
}

void UPalBaseCampModuleItemStorage::OnNotAvailableConcreteModel_ServerInternal(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void UPalBaseCampModuleItemStorage::OnAvailableConcreteModel_ServerInternal(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void UPalBaseCampModuleItemStorage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampModuleItemStorage, ContainerInfos);
    DOREPLIFETIME(UPalBaseCampModuleItemStorage, GuildContainerInfo);
}



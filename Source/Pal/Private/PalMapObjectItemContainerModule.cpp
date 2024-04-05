#include "PalMapObjectItemContainerModule.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectItemContainerModule::UPalMapObjectItemContainerModule() {
    this->TargetContainer = NULL;
    this->bDropItemAtDisposed = true;
    this->UsageType = EPalContainerUsageType::None;
}

void UPalMapObjectItemContainerModule::UnbindUpdateContents(UPalMapObjectItemContainerModule::FUpdateContentsDelegate Delegate) {
}

bool UPalMapObjectItemContainerModule::TryGetContainer(UPalItemContainer*& OutContainer) const {
    return false;
}

void UPalMapObjectItemContainerModule::RequestSortContainer_ServerInternal() {
}

void UPalMapObjectItemContainerModule::RequestSortContainer() {
}

void UPalMapObjectItemContainerModule::RequestChangeFilter_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectItemContainerModule::RequestChangeAllFilterUncheck_ServerInternal() {
}

void UPalMapObjectItemContainerModule::RequestChangeAllFilterCheck_ServerInternal() {
}

void UPalMapObjectItemContainerModule::OnUpdateFilterPreference(UPalItemContainer* Container) {
}

void UPalMapObjectItemContainerModule::OnUpdateContents(UPalItemContainer* Container) {
}

void UPalMapObjectItemContainerModule::OnRep_TargetContainer() {
}

TArray<FName> UPalMapObjectItemContainerModule::GetFilterOffList() const {
    return TArray<FName>();
}

FPalContainerId UPalMapObjectItemContainerModule::GetContainerId() const {
    return FPalContainerId{};
}

UPalItemContainer* UPalMapObjectItemContainerModule::GetContainer() const {
    return NULL;
}

void UPalMapObjectItemContainerModule::BindUpdateContents(UPalMapObjectItemContainerModule::FUpdateContentsDelegate Delegate) {
}

void UPalMapObjectItemContainerModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectItemContainerModule, TargetContainer);
    DOREPLIFETIME(UPalMapObjectItemContainerModule, bDropItemAtDisposed);
    DOREPLIFETIME(UPalMapObjectItemContainerModule, SlotAttributeIndexes);
    DOREPLIFETIME(UPalMapObjectItemContainerModule, AllSlotAttribute);
    DOREPLIFETIME(UPalMapObjectItemContainerModule, UsageType);
}



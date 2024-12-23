#include "PalUIItemChestFilterModel.h"

UPalUIItemChestFilterModel::UPalUIItemChestFilterModel() {
}

void UPalUIItemChestFilterModel::Setup(UPalMapObjectConcreteModelBase* InConcreteModel) {
}

void UPalUIItemChestFilterModel::RequestChangeFilter(const FName InFilterName, const bool bOn) {
}

void UPalUIItemChestFilterModel::RequestAllUncheck() {
}

void UPalUIItemChestFilterModel::RequestAllCheck() {
}

void UPalUIItemChestFilterModel::OnUpdateFilterPreference(UPalItemContainer* Container) {
}

UPalMapObjectItemContainerModule* UPalUIItemChestFilterModel::GetItemContainerModule() const {
    return NULL;
}

TScriptInterface<IPalMapObjectItemContainerAccessInterface> UPalUIItemChestFilterModel::GetItemContainerAccess() const {
    return NULL;
}

UPalItemContainer* UPalUIItemChestFilterModel::GetItemContainer() const {
    return NULL;
}

TMap<FName, FName> UPalUIItemChestFilterModel::GetFilterIdAndDisplayTextId() const {
    return TMap<FName, FName>();
}

void UPalUIItemChestFilterModel::Dispose() {
}



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

void UPalUIItemChestFilterModel::OnUpdateFilterPreference(UPalMapObjectItemContainerModule* Module) {
}

UPalMapObjectItemContainerModule* UPalUIItemChestFilterModel::GetItemContainerModule() const {
    return NULL;
}

TMap<FName, FName> UPalUIItemChestFilterModel::GetFilterIdAndDisplayTextId() const {
    return TMap<FName, FName>();
}

void UPalUIItemChestFilterModel::Dispose() {
}



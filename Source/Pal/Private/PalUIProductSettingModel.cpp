#include "PalUIProductSettingModel.h"

UPalUIProductSettingModel::UPalUIProductSettingModel() {
    this->ProductNum = 1;
}

bool UPalUIProductSettingModel::TryGetEnergyModule(UPalMapObjectEnergyModule*& Module) {
    return false;
}

void UPalUIProductSettingModel::SetProductNumByInput(int32 InputNum) {
}

void UPalUIProductSettingModel::SetMaxProduction() {
}

void UPalUIProductSettingModel::SetInfiniteProduction() {
}

void UPalUIProductSettingModel::SetFocusedRecipe(const FName RecipeID) {
}

void UPalUIProductSettingModel::SelectRecipe(const FName RecipeID) {
}

void UPalUIProductSettingModel::ResetProductNum() {
}

void UPalUIProductSettingModel::OnUpdateInventory(UPalItemContainerMultiHelper* IInventoryContainers) {
}

void UPalUIProductSettingModel::NotifyUpdateForce() {
}

bool UPalUIProductSettingModel::IsProductNumInfinite() const {
    return false;
}

void UPalUIProductSettingModel::IncreaseProductNum() {
}

void UPalUIProductSettingModel::GetRequiredMaterialInfos(TArray<FPalStaticItemIdAndNum>& RequiredMaterialInfos) {
}

FName UPalUIProductSettingModel::GetRecipeId() const {
    return NAME_None;
}

FPalItemRecipe UPalUIProductSettingModel::GetRecipe() const {
    return FPalItemRecipe{};
}

int32 UPalUIProductSettingModel::GetProductNum() const {
    return 0;
}

void UPalUIProductSettingModel::DecreaseProductNum() {
}

float UPalUIProductSettingModel::CalcWorkAmount() const {
    return 0.0f;
}

int32 UPalUIProductSettingModel::CalcMaxProductableNum() {
    return 0;
}

int32 UPalUIProductSettingModel::CalcConsumeEnergy() const {
    return 0;
}



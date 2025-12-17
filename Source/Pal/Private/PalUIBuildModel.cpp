#include "PalUIBuildModel.h"

UPalUIBuildModel::UPalUIBuildModel() {
}

void UPalUIBuildModel::StartPaintMode() const {
}

void UPalUIBuildModel::StartDismantleMode() const {
}

void UPalUIBuildModel::StartBuildObject(const FName BuildObjectId) const {
}

void UPalUIBuildModel::OnOpenMenu() {
}

void UPalUIBuildModel::OnConfimAlert_ForceBuildPalBox(const bool bDialogBool) {
}

void UPalUIBuildModel::GetBuildObjectDataArrayForUIDisplay(const EPalBuildObjectTypeA TypeA, TMap<EPalBuildObjectTypeForUIDisplay, FPalBuildObjectDataSetTypeUIDisplay>& OutMap) const {
}

void UPalUIBuildModel::GetBuildObjectDataArrayForTypeAByTypeB(const EPalBuildObjectTypeA TypeA, TArray<FPalBuildObjectDataSetTypeB>& OutArray) const {
}

void UPalUIBuildModel::FinishPaintMode() const {
}

void UPalUIBuildModel::FinishDismantleMode() const {
}



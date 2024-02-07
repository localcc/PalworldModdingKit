#include "PalMapObjectRepairItemModel.h"

UPalMapObjectRepairItemModel::UPalMapObjectRepairItemModel() {
    this->RequiredRepairItemRate = 1.00f;
    this->WidgetClass = NULL;
}

void UPalMapObjectRepairItemModel::RequestRepairItem(const TArray<FPalItemSlotId>& TargetItemSlotIdArray) {
}

void UPalMapObjectRepairItemModel::RepairItem_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectRepairItemModel::NotifyRepairResult(bool IsSuccess) {
}

void UPalMapObjectRepairItemModel::GetRequiredMaterials(const TArray<FPalItemId>& TargetRepairItemIdArray, TArray<FPalStaticItemIdAndNum>& OutRequiredMaterials) const {
}



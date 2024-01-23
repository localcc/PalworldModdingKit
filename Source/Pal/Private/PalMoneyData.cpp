#include "PalMoneyData.h"

void UPalMoneyData::OnUpdateInventorylContainer(UPalItemContainer* Container) {
}

int64 UPalMoneyData::GetNowMoney() const {
    return 0;
}

UPalMoneyData::UPalMoneyData() {
    this->parentInventoryData = NULL;
}


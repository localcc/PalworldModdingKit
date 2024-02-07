#include "PalMoneyData.h"

UPalMoneyData::UPalMoneyData() {
    this->parentInventoryData = NULL;
}

void UPalMoneyData::OnUpdateInventorylContainer(UPalItemContainer* Container) {
}

int64 UPalMoneyData::GetNowMoney() const {
    return 0;
}



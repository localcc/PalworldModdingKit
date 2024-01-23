#include "PalQuestBlock_CountPickupItem.h"

void UPalQuestBlock_CountPickupItem::OnPickupItem(TArray<FPalItemAndNum>& ItemInfos) {
}

UPalQuestBlock_CountPickupItem::UPalQuestBlock_CountPickupItem() {
    this->RequireCount = 0;
    this->NowPickupCount = 0;
}


#include "PalQuestBlock_CountPickupItem.h"

UPalQuestBlock_CountPickupItem::UPalQuestBlock_CountPickupItem() {
    this->RequireCount = 0;
    this->NowPickupCount = 0;
}

void UPalQuestBlock_CountPickupItem::OnPickupItem(TArray<FPalItemAndNum>& ItemInfos) {
}



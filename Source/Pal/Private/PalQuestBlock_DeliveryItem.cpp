#include "PalQuestBlock_DeliveryItem.h"

UPalQuestBlock_DeliveryItem::UPalQuestBlock_DeliveryItem() {
}

bool UPalQuestBlock_DeliveryItem::HasItem(const FGuid& PlayerUId) const {
    return false;
}

TMap<FPalDataTableRowName_ItemData, int32> UPalQuestBlock_DeliveryItem::GetRequireItemMap() const {
    return TMap<FPalDataTableRowName_ItemData, int32>();
}



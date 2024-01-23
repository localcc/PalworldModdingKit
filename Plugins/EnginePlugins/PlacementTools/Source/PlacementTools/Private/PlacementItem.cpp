#include "PlacementItem.h"

FPlacementItem::FPlacementItem() {
    this->ItemType = EItemType::Actor;
    this->Actor = NULL;
    this->Mesh = NULL;
    this->Weight = 0.00f;
}


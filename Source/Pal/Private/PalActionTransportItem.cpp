#include "PalActionTransportItem.h"

UPalActionTransportItem::UPalActionTransportItem() {
    this->ItemActor = NULL;
}

void UPalActionTransportItem::WriteBlackboard(FPalNetArchive& BlackboardRef, const FName StaticItemId) {
}

void UPalActionTransportItem::StartSetupItemActor(const FName StaticItemId) {
}

void UPalActionTransportItem::ReadBlackboard(FName& StaticItemId) const {
}



#include "PalActionTransportItem.h"

void UPalActionTransportItem::WriteBlackboard(FPalNetArchive& BlackboardRef, const FName StaticItemId) {
}

void UPalActionTransportItem::StartSetupItemActor(const FName StaticItemId) {
}

void UPalActionTransportItem::ReadBlackboard(FName& StaticItemId) const {
}

UPalActionTransportItem::UPalActionTransportItem() {
    this->ItemActor = NULL;
}


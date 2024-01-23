#include "PalPlayerMenuUI.h"

void UPalPlayerMenuUI::SetSelectedItemSlot(FPalItemSlotId SelectSlot) {
}

void UPalPlayerMenuUI::SetIsDraging(bool Draging) {
}




void UPalPlayerMenuUI::InitBindAxis() {
}

FPalItemSlotId UPalPlayerMenuUI::GetSelectedItemSlot() {
    return FPalItemSlotId{};
}

bool UPalPlayerMenuUI::GetIsDragingt() {
    return false;
}







UPalPlayerMenuUI::UPalPlayerMenuUI() : UUserWidget(FObjectInitializer::Get()) {
    this->IsDraging = false;
}


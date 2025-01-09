#include "PalGamepadButtonImageDatabase.h"

UPalGamepadButtonImageDatabase::UPalGamepadButtonImageDatabase() {
    this->GamepadButtonImageDataTable = NULL;
}

bool UPalGamepadButtonImageDatabase::GetBrussBySlateBrush(const UObject* WorldContextObject, FSlateBrush SlateBrush, FSlateBrush& OutData) {
    return false;
}

bool UPalGamepadButtonImageDatabase::GetBrussByImage(const UObject* WorldContextObject, UTexture2D* Image, FSlateBrush& OutData) {
    return false;
}



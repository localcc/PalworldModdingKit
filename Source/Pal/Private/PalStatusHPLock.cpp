#include "PalStatusHPLock.h"

UPalStatusHPLock::UPalStatusHPLock() {
    this->CurrentHPLockRate = 0.00f;
    this->LockEnable = false;
}

void UPalStatusHPLock::SetHPLockRate_Implementation(const float Rate) {
}

void UPalStatusHPLock::ReleaseLock_Implementation() {
}

bool UPalStatusHPLock::GetLockHPRate_Implementation(float& OutRate) const {
    return false;
}



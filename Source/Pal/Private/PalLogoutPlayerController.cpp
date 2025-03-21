#include "PalLogoutPlayerController.h"

APalLogoutPlayerController::APalLogoutPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InventoryData = NULL;
    this->OtomoData = NULL;
}

void APalLogoutPlayerController::OnDead(FPalDeadInfo DeadInfo) {
}



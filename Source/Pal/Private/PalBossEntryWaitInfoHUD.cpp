#include "PalBossEntryWaitInfoHUD.h"

void UPalBossEntryWaitInfoHUD::UpdateWaitInfo(bool bIsCountDown, FDateTime TimeLimit) {
}


void UPalBossEntryWaitInfoHUD::OnCloseHUD() {
}

UPalBossEntryWaitInfoHUD::UPalBossEntryWaitInfoHUD() {
    this->EnableCountDown = false;
    this->BossTower = NULL;
}


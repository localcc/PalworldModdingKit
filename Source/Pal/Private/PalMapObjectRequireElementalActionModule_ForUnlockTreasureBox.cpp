#include "PalMapObjectRequireElementalActionModule_ForUnlockTreasureBox.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectRequireElementalActionModule_ForUnlockTreasureBox::UPalMapObjectRequireElementalActionModule_ForUnlockTreasureBox() {
    this->bLocked = false;
    this->SalvageGameUIClass = NULL;
}

void UPalMapObjectRequireElementalActionModule_ForUnlockTreasureBox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectRequireElementalActionModule_ForUnlockTreasureBox, bLocked);
}



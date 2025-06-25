#include "PalMapObjectTreasureBox.h"

APalMapObjectTreasureBox::APalMapObjectTreasureBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlayOpenAnimation = true;
    this->LongHoldInteractDuration = 0.00f;
    this->InteractPlayerActionType = EPalActionType::None;
    this->IsLockRiding = false;
    this->TreasureSpecialType = EPalMapObjectTreasureSpecialType::None;
    this->OpeningPlayerActionType = EPalActionType::None;
}



void APalMapObjectTreasureBox::OnUnlockElementalInServer(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void APalMapObjectTreasureBox::OnReceiveOpenInServer(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void APalMapObjectTreasureBox::NotifyStartOpenInAnimation() {
}

void APalMapObjectTreasureBox::BroadcastTriggerUnlockElemental_Implementation() {
}

void APalMapObjectTreasureBox::BroadcastTriggerOpen_Implementation() {
}



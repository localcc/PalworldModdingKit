#include "PalMapObjectTreasureBox.h"

APalMapObjectTreasureBox::APalMapObjectTreasureBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlayOpenAnimation = true;
    this->LongHoldInteractDuration = 0.00f;
    this->InteractPlayerActionType = EPalActionType::None;
}


void APalMapObjectTreasureBox::OnReceiveOpenInServer(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void APalMapObjectTreasureBox::NotifyStartOpenInAnimation() {
}

void APalMapObjectTreasureBox::BroadcastTriggerOpen_Implementation() {
}



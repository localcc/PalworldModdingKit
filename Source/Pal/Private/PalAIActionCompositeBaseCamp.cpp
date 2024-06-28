#include "PalAIActionCompositeBaseCamp.h"

UPalAIActionCompositeBaseCamp::UPalAIActionCompositeBaseCamp() {
    this->WalkSpeedDefault = 0.25f;
}

void UPalAIActionCompositeBaseCamp::NotifyOrderCommand(const EPalMapBaseCampWorkerOrderType OrderType) {
}

void UPalAIActionCompositeBaseCamp::InterruptActionToSleep() {
}

void UPalAIActionCompositeBaseCamp::InterruptActionToRecoverHungry(const FPalMonsterControllerBaseCampHungryParameter& Parameter) {
}

void UPalAIActionCompositeBaseCamp::ChangeActionToWorker() {
}



#include "PalStateMachine.h"

UPalStateMachine::UPalStateMachine() {
    this->CurrentState = NULL;
}

void UPalStateMachine::Tick(float DeltaTime) {
}

void UPalStateMachine::Start(UClass* StartClass) {
}

UPalStateMachineStateBase* UPalStateMachine::GetCurrentState() const {
    return NULL;
}

void UPalStateMachine::Dispose() {
}

void UPalStateMachine::ChangeState(UClass* ToStateClass) {
}

void UPalStateMachine::AddState(UPalStateMachineStateBase* State) {
}



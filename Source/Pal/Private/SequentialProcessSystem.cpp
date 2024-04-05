#include "SequentialProcessSystem.h"

USequentialProcessSystem::USequentialProcessSystem() {
    this->CurrentSequenceIndex = -1;
}

void USequentialProcessSystem::OnChangeProcessState(USequentialProcessHandle* ChangedProcessHandle) {
}

void USequentialProcessSystem::OnChangeProcessProgressRate(USequentialProcessHandle* ChangedProcessHandle) {
}



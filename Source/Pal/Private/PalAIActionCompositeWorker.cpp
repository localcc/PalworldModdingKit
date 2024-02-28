#include "PalAIActionCompositeWorker.h"
#include "PalAIActionWorkerApproachToWorkArea.h"
#include "PalAIActionWorkerWait.h"
#include "PalAIActionWorkerWorking.h"

UPalAIActionCompositeWorker::UPalAIActionCompositeWorker() {
    this->WaitActionClass = UPalAIActionWorkerWait::StaticClass();
    this->ApproachActionClass = UPalAIActionWorkerApproachToWorkArea::StaticClass();
    this->WaitForWorkableActionClass = NULL;
    this->WorkingActionClass = UPalAIActionWorkerWorking::StaticClass();
    this->CurrentActionClass = NULL;
    this->DefaultWalkSpeed = 1.00f;
}

void UPalAIActionCompositeWorker::UnregisterFixAssignWork() {
}

bool UPalAIActionCompositeWorker::TryFindNextWork() {
    return false;
}

void UPalAIActionCompositeWorker::RegisterFixedAssignWorkAttack(const FGuid& MapObjectModelInstanceId) {
}

void UPalAIActionCompositeWorker::RegisterFixedAssignWork(const FGuid& WorkId) {
}


void UPalAIActionCompositeWorker::OnStartAction(UPalAIActionBase* action) {
}

bool UPalAIActionCompositeWorker::IsTargetWorkable() const {
    return false;
}

bool UPalAIActionCompositeWorker::IsTargetAssignable() const {
    return false;
}

bool UPalAIActionCompositeWorker::IsAssignedToTarget() const {
    return false;
}

void UPalAIActionCompositeWorker::ChangeActionWaitForWorkable() {
}

void UPalAIActionCompositeWorker::ChangeActionWait() {
}

void UPalAIActionCompositeWorker::ChangeActionApproachToWorkArea() {
}



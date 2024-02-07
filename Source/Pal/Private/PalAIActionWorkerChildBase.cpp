#include "PalAIActionWorkerChildBase.h"

UPalAIActionWorkerChildBase::UPalAIActionWorkerChildBase() {
}

void UPalAIActionWorkerChildBase::LookToTarget(const float TurnSpeed, const float DeltaTime) {
}

bool UPalAIActionWorkerChildBase::IsTargetWorkable() const {
    return false;
}

bool UPalAIActionWorkerChildBase::IsTargetAssignable() const {
    return false;
}

bool UPalAIActionWorkerChildBase::IsAssignedToTarget() const {
    return false;
}

FVector UPalAIActionWorkerChildBase::GetWorkLookAtLocation() const {
    return FVector{};
}

UPalAIActionCompositeWorker* UPalAIActionWorkerChildBase::GetParent() const {
    return NULL;
}



#include "PalWorkProgressManager.h"

UPalWorkBase* UPalWorkProgressManager::GetWorkByAssignId(const FPalWorkAssignHandleId& WorkAssignId) const {
    return NULL;
}

UPalWorkAssign* UPalWorkProgressManager::GetWorkAssign(const FPalWorkAssignHandleId& WorkAssignId) const {
    return NULL;
}

UPalWorkBase* UPalWorkProgressManager::GetWork(const FGuid& WorkId) const {
    return NULL;
}

UPalWorkProgressManager::UPalWorkProgressManager() {
    this->MoveCheckProcessIndex = 0;
    this->MoveCheckMaxNumPerFrame = 100;
    this->WorkTickInvokeMaxNumInOneTick = 600;
}


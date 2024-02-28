#include "PalBaseCampManager.h"

UPalBaseCampManager::UPalBaseCampManager() {
    this->WorkerEventClassDirectoryPath = TEXT("/Game/Pal/Blueprint/BaseCamp/WorkerEvents");
    this->BaseCampAIControllerClass = NULL;
    this->WorkerCapacityNumDefault = 0;
    this->DisplayCapacityNum = 30;
    this->WorkerEventMasterDataTable = NULL;
    this->WorkerSickMasterDataTable = NULL;
    this->WorkerEventTriggerTickMaxCount = 2147483647;
    this->UpdateIntervalSquaredDistanceFromPlayer = 1.00f;
    this->RestoreIgnoredWorkDistanceFromPlayer = 0.00f;
    this->ClearUnreachableDistanceFromPlayer = 0.00f;
    this->BaseCampTickInvokeMaxNumInOneTick = 5;
}

bool UPalBaseCampManager::TryGetModel(const FGuid& BaseCampId, UPalBaseCampModel*& OutModel) const {
    return false;
}

void UPalBaseCampManager::RequestDismantalDistanceBaseCamp(const FGuid& InstanceId) {
}

void UPalBaseCampManager::OnUpdateLocationWork_ServerInternal(UPalWorkBase* Work) {
}

void UPalBaseCampManager::OnUnregisteredWork_ServerInternal(UPalWorkBase* Work) {
}

void UPalBaseCampManager::OnRegisteredNewWork_ServerInternal(UPalWorkBase* Work) {
}

void UPalBaseCampManager::OnCreateMapObjectModelInServer(UPalMapObjectModel* CreatedModel, const FVector& Location) {
}

UPalBaseCampModel* UPalBaseCampManager::GetNearestBaseCamp(const FVector& Location) const {
    return NULL;
}

UPalBaseCampModel* UPalBaseCampManager::GetInRangedBaseCamp(const FVector& Location, const float Margin) const {
    return NULL;
}

void UPalBaseCampManager::GetBaseCampIds(TArray<FGuid>& OutIds) const {
}



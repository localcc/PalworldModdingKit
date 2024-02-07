#include "PalUIBaseCampTaskBase.h"

UPalUIBaseCampTaskBase::UPalUIBaseCampTaskBase() {
    this->baseCampTaskCheckerClass = NULL;
    this->lastCheckedBaseCampLevel = -1;
    this->taskChecker = NULL;
}

bool UPalUIBaseCampTaskBase::TryBaseCampLevelUp() {
    return false;
}

void UPalUIBaseCampTaskBase::SetTargetBaseCampID(const FGuid& TargetBaseCampId) {
}

bool UPalUIBaseCampTaskBase::IsCampLevelMax() {
    return false;
}

bool UPalUIBaseCampTaskBase::GetNowLevelTaskData(FPalBaseCampTaskDataSet& outTaskData) {
    return false;
}

UPalBaseCampModel* UPalUIBaseCampTaskBase::GetBaseCampModel() {
    return NULL;
}

FGuid UPalUIBaseCampTaskBase::GetBaseCampId() {
    return FGuid{};
}

bool UPalUIBaseCampTaskBase::CheckTask(FPalBaseCampTaskCheckedData& outChedckedData) {
    return false;
}



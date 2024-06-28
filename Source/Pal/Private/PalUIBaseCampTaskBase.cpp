#include "PalUIBaseCampTaskBase.h"

UPalUIBaseCampTaskBase::UPalUIBaseCampTaskBase() {
    this->baseCampTaskCheckerClass = NULL;
    this->lastCheckedBaseCampLevel = -1;
    this->taskChecker = NULL;
}

bool UPalUIBaseCampTaskBase::TryBaseCampLevelUp() {
    return false;
}

void UPalUIBaseCampTaskBase::SetTargetBaseCampID(const FGuid& TargetBaseCampID) {
}

bool UPalUIBaseCampTaskBase::IsWorkerCapacityLimited(int32 InLevel) const {
    return false;
}

bool UPalUIBaseCampTaskBase::IsCampLevelMax() {
    return false;
}

int32 UPalUIBaseCampTaskBase::GetWorkerMaxNum(int32 InLevel) const {
    return 0;
}

bool UPalUIBaseCampTaskBase::GetNowLevelTaskData(FPalBaseCampTaskDataSet& outTaskData) {
    return false;
}

UPalBaseCampModel* UPalUIBaseCampTaskBase::GetBaseCampModel() {
    return NULL;
}

int32 UPalUIBaseCampTaskBase::GetBaseCampMaxNumInGuild(int32 InLevel) const {
    return 0;
}

FGuid UPalUIBaseCampTaskBase::GetBaseCampId() {
    return FGuid{};
}

bool UPalUIBaseCampTaskBase::CheckTask(FPalBaseCampTaskCheckedData& outChedckedData) {
    return false;
}



#include "PalUIInsideBaseCampCanvas.h"

UPalUIInsideBaseCampCanvas::UPalUIInsideBaseCampCanvas() {
    this->taskChecker = NULL;
    this->palboxAreaRange = 1500.00f;
    this->allTaskCompletedLogClass = NULL;
}

void UPalUIInsideBaseCampCanvas::UnregisterTaskProgressEvent(const UPalBaseCampModel* Model) {
}

void UPalUIInsideBaseCampCanvas::ResetCollectedBaseCampWorkerInfo() {
}

void UPalUIInsideBaseCampCanvas::ResetCachedTaskCheckData() {
}

void UPalUIInsideBaseCampCanvas::RemoveAllTaskCompletedLog() {
}

void UPalUIInsideBaseCampCanvas::RegisterTaskProgressEvent() {
}

void UPalUIInsideBaseCampCanvas::OnUpdateBaseCampWorkerDirectorBattleType(UPalMapObjectBaseCampWorkerDirectorModel* Model) {
}

void UPalUIInsideBaseCampCanvas::OnNotAvailableInsideBaseCampMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void UPalUIInsideBaseCampCanvas::OnAvailableInsideBaseCampMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

bool UPalUIInsideBaseCampCanvas::IsExistWorkHardModel() const {
    return false;
}

bool UPalUIInsideBaseCampCanvas::IsExistWorkerDirectorModel() const {
    return false;
}

EPalBaseCampPassiveEffectWorkHardType UPalUIInsideBaseCampCanvas::GetWorkHardType() const {
    return EPalBaseCampPassiveEffectWorkHardType::Easy;
}

bool UPalUIInsideBaseCampCanvas::GetTaskData(FPalBaseCampTaskDataSet& outTaskData) {
    return false;
}

FGuid UPalUIInsideBaseCampCanvas::GetLocalPlayerGroupID() const {
    return FGuid{};
}

UPalBaseCampModel* UPalUIInsideBaseCampCanvas::GetInsideBaseCampModel() const {
    return NULL;
}

void UPalUIInsideBaseCampCanvas::GetBaseCampPalSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) {
}

int32 UPalUIInsideBaseCampCanvas::GetBaseCampPalBedCount() {
    return 0;
}

void UPalUIInsideBaseCampCanvas::CollectBaseCampWorkerInfo() {
}

bool UPalUIInsideBaseCampCanvas::CheckTask(FPalBaseCampTaskCheckedData& outCheckedData) {
    return false;
}

void UPalUIInsideBaseCampCanvas::CheckItemNum(TMap<FName, int64>& outItemNumMap, int64& outFoodNum) {
}

void UPalUIInsideBaseCampCanvas::CheckInsidePalBox() {
}



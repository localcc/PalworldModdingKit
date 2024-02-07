#include "PalUIInsideBaseCampCanvas.h"

UPalUIInsideBaseCampCanvas::UPalUIInsideBaseCampCanvas() {
    this->taskChecker = NULL;
    this->palboxAreaRange = 1500.00f;
    this->allTaskCompletedLogClass = NULL;
}

void UPalUIInsideBaseCampCanvas::UnregisterTaskProgressEvent(const UPalBaseCampModel* Model) {
}

void UPalUIInsideBaseCampCanvas::ResetCachedTaskCheckData() {
}

void UPalUIInsideBaseCampCanvas::RemoveAllTaskCompletedLog() {
}

void UPalUIInsideBaseCampCanvas::RegisterTaskProgressEvent() {
}

void UPalUIInsideBaseCampCanvas::OnNotAvailableInsideBaseCampMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void UPalUIInsideBaseCampCanvas::OnAvailableInsideBaseCampMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

bool UPalUIInsideBaseCampCanvas::GetTaskData(FPalBaseCampTaskDataSet& outTaskData) {
    return false;
}

UPalBaseCampModel* UPalUIInsideBaseCampCanvas::GetInsideBaseCampModel() {
    return NULL;
}

void UPalUIInsideBaseCampCanvas::GetBaseCampPalSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) {
}

int32 UPalUIInsideBaseCampCanvas::GetBaseCampPalBedCount() {
    return 0;
}

bool UPalUIInsideBaseCampCanvas::CheckTask(FPalBaseCampTaskCheckedData& outCheckedData) {
    return false;
}

void UPalUIInsideBaseCampCanvas::CheckItemNum(TMap<FName, int64>& outItemNumMap, int64& outFoodNum) {
}

void UPalUIInsideBaseCampCanvas::CheckInsidePalBox() {
}



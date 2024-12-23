#include "PalUIBuildingModel.h"

UPalUIBuildingModel::UPalUIBuildingModel() {
}

void UPalUIBuildingModel::ToggleChangeModeReplace() {
}

bool UPalUIBuildingModel::ShouldDisplayWarningForBuildObject() const {
    return false;
}

bool UPalUIBuildingModel::ShouldDisplayChangeBuildingModeGuide() const {
    return false;
}

void UPalUIBuildingModel::Setup(const FName InBuildObjectId) {
}

void UPalUIBuildingModel::RotateTarget(const bool bRight) {
}


bool UPalUIBuildingModel::IsSnapMode() const {
    return false;
}

bool UPalUIBuildingModel::IsOutsideBaseCamp() const {
    return false;
}

bool UPalUIBuildingModel::IsExistBaseCamp() {
    return false;
}

bool UPalUIBuildingModel::IsChangedMode() const {
    return false;
}

FText UPalUIBuildingModel::GetWarningText(const EPalMapObjectOperationResult Result) {
    return FText::GetEmpty();
}

int32 UPalUIBuildingModel::GetMaxBuildingLimitNum() const {
    return 0;
}

int32 UPalUIBuildingModel::GetBuildingNum() const {
    return 0;
}

UPalBaseCampModel* UPalUIBuildingModel::GetBaseCampModelForPlayer() const {
    return NULL;
}

UPalBaseCampModel* UPalUIBuildingModel::GetBaseCampModel(bool bIncludeForPlayer) {
    return NULL;
}

void UPalUIBuildingModel::FinishBuilding() {
}

void UPalUIBuildingModel::Dispose() {
}

void UPalUIBuildingModel::ChangeSnapMode(const bool bOn) {
}

void UPalUIBuildingModel::ChangeModeReplace(const bool bOn) {
}

void UPalUIBuildingModel::ChangeMode(const bool bOn) {
}

bool UPalUIBuildingModel::CanChangeSnapModeForBuildObject() const {
    return false;
}

bool UPalUIBuildingModel::CanChangeReplaceModeForBuildObject() const {
    return false;
}

void UPalUIBuildingModel::BuildObject(const bool bContinuously) {
}



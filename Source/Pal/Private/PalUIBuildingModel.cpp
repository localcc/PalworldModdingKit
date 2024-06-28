#include "PalUIBuildingModel.h"

UPalUIBuildingModel::UPalUIBuildingModel() {
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


bool UPalUIBuildingModel::IsOutsideBaseCamp() const {
    return false;
}

bool UPalUIBuildingModel::IsExistBaseCamp() {
    return false;
}

FText UPalUIBuildingModel::GetWarningText(const EPalMapObjectOperationResult Result) {
    return FText::GetEmpty();
}

void UPalUIBuildingModel::FinishBuilding() {
}

void UPalUIBuildingModel::Dispose() {
}

void UPalUIBuildingModel::ChangeSnapMode(const bool bOn) {
}

void UPalUIBuildingModel::ChangeMode(const bool bOn) {
}

bool UPalUIBuildingModel::CanChangeSnapModeForBuildObject() const {
    return false;
}

void UPalUIBuildingModel::BuildObject(const bool bContinuously) {
}



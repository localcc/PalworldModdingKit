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

void UPalUIBuildingModel::FinishBuilding() {
}

void UPalUIBuildingModel::Dispose() {
}

void UPalUIBuildingModel::ChangeMode(const bool bOn) {
}

void UPalUIBuildingModel::BuildObject(const bool bContinuously) {
}



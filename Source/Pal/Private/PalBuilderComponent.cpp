#include "PalBuilderComponent.h"

UPalBuilderComponent::UPalBuilderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InstallDistanceNormalFromOwner = 100.00f;
    this->InstallableRange = 1000.00f;
    this->OwnerCamera = NULL;
    this->InstallChecker = NULL;
    this->DismantleChecker = NULL;
}

void UPalBuilderComponent::OnExitBaseCamp(UPalBaseCampModel* BaseCampModel) {
}

void UPalBuilderComponent::OnEnterBaseCamp(UPalBaseCampModel* BaseCampModel) {
}

bool UPalBuilderComponent::IsSnapMode() const {
    return false;
}

bool UPalBuilderComponent::IsInstallAtReticle() const {
    return false;
}

bool UPalBuilderComponent::IsExistsMaterialForBuildObject(const FPalBuildObjectData& BuildObjectData) const {
    return false;
}

bool UPalBuilderComponent::IsExecuting() const {
    return false;
}

bool UPalBuilderComponent::IsEnableDismantle() const {
    return false;
}

EPalMapObjectOperationResult UPalBuilderComponent::IsEnableBuild() const {
    return EPalMapObjectOperationResult::None;
}

bool UPalBuilderComponent::IsDismantling() const {
    return false;
}

bool UPalBuilderComponent::IsChangedMode() const {
    return false;
}

void UPalBuilderComponent::GetSelectedBuildObjectId(FName& OutSelectedBuildObjectId) const {
}

int32 UPalBuilderComponent::GetMaxBuildingLimitNum() const {
    return 0;
}

APalBuildObject* UPalBuilderComponent::GetDismantleTargetObject() {
    return NULL;
}

int32 UPalBuilderComponent::GetBuildingNum() const {
    return 0;
}

void UPalBuilderComponent::CollectItemInfoEnableToUseMaterial(TArray<FName> StaticItemIds, TArray<FPalStaticItemIdAndNum>& OutItemInfos) const {
}

EPalMapObjectOperationResult UPalBuilderComponent::CanRequestDismantle() const {
    return EPalMapObjectOperationResult::None;
}



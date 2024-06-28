#include "PalBuilderComponent.h"

UPalBuilderComponent::UPalBuilderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InstallDistanceNormalFromOwner = 100.00f;
    this->InstallableRange = 1000.00f;
    this->OwnerCamera = NULL;
    this->InstallChecker = NULL;
    this->DismantleChecker = NULL;
}

void UPalBuilderComponent::RequestBuild_ToServer_Implementation(const FName BuildObjectId, const FVector& Location, const FQuat& Rotation, const TArray<FPalNetArchive>& ExtraParameterArchives, FPalBuildRequestDebugParameter DebugParameter) {
}

void UPalBuilderComponent::ReceiveBuildResult_ToRequestClient_Implementation(const EPalMapObjectOperationResult Result) {
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

void UPalBuilderComponent::GetSelectedBuildObjectId(FName& OutSelectedBuildObjectId) const {
}

APalBuildObject* UPalBuilderComponent::GetDismantleTargetObject() {
    return NULL;
}

void UPalBuilderComponent::CollectItemInfoEnableToUseMaterial(TArray<FName> StaticItemIds, TArray<FPalStaticItemIdAndNum>& OutItemInfos) const {
}

EPalMapObjectOperationResult UPalBuilderComponent::CanRequestDismantle() const {
    return EPalMapObjectOperationResult::None;
}



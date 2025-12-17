#include "PalBuilderComponent.h"

UPalBuilderComponent::UPalBuilderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InstallDistanceNormalFromOwner = 100.00f;
    this->OwnerCamera = NULL;
    this->InstallChecker = NULL;
    this->DismantleChecker = NULL;
    this->PaintModel = NULL;
}

void UPalBuilderComponent::UnregisterInModeCametaOffset() {
}

void UPalBuilderComponent::RegisterInModeCameraOffset() {
}

void UPalBuilderComponent::OnExitBaseCamp(UPalBaseCampModel* BaseCampModel) {
}

void UPalBuilderComponent::OnEnterBaseCamp(UPalBaseCampModel* BaseCampModel) {
}

void UPalBuilderComponent::OnDyingDeadEndOwner(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo) {
}

void UPalBuilderComponent::OnDeadOwner(FPalDeadInfo DeadInfo) {
}

bool UPalBuilderComponent::IsSnapMode() const {
    return false;
}

bool UPalBuilderComponent::IsInstallAtReticle() const {
    return false;
}

bool UPalBuilderComponent::IsInPaintingMode() const {
    return false;
}

bool UPalBuilderComponent::IsInBuildingMode() const {
    return false;
}

bool UPalBuilderComponent::IsExistsMaterialForBuildObject(const FPalBuildObjectData& BuildObjectData) const {
    return false;
}

bool UPalBuilderComponent::IsExecuting() const {
    return false;
}

bool UPalBuilderComponent::IsEnablePaint() const {
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

APalBuildObject* UPalBuilderComponent::GetPaintTargetObject() {
    return NULL;
}

UPalUIPaintModel* UPalBuilderComponent::GetPaintModel() const {
    return NULL;
}

int32 UPalBuilderComponent::GetMaxBuildingLimitNum() const {
    return 0;
}

APalBuildObject* UPalBuilderComponent::GetDismantleTargetObject() {
    return NULL;
}

EPalBuilderMode UPalBuilderComponent::GetCurrentMode() const {
    return EPalBuilderMode::None;
}

int32 UPalBuilderComponent::GetBuildingNum() const {
    return 0;
}

void UPalBuilderComponent::CollectItemInfoEnableToUseMaterial(TArray<FName> StaticItemIds, TArray<FPalStaticItemIdAndNum>& OutItemInfos) const {
}

void UPalBuilderComponent::ChangeMode(EPalBuilderMode NewMode) {
}

EPalMapObjectOperationResult UPalBuilderComponent::CanRequestPaint() const {
    return EPalMapObjectOperationResult::None;
}

EPalMapObjectOperationResult UPalBuilderComponent::CanRequestDismantle() const {
    return EPalMapObjectOperationResult::None;
}



#include "PalShooterComponent.h"
#include "Net/UnrealNetwork.h"

UPalShooterComponent::UPalShooterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WalkSpeedMultiplierInAim = 0.20f;
    this->WalkSpeedMultiplierInHipShoot = 0.70f;
    this->ChangeWeaponInterpTime = 0.10f;
    this->IsUseBlurUpdate = false;
    this->bIsAiming = false;
    this->bIsShooting = false;
    this->bIsRequestAim = false;
    this->bIsRequestPullTrigger = false;
    this->bIsReloading = false;
    this->HasWeapon = NULL;
    this->CacheNextWeapon = NULL;
    this->bIsDisableShootingTemporarily = false;
    this->PullTriggerCountDown = 0.00f;
    this->PullTriggerCountDownCount = 0;
    this->ElapsedTimeSinceWeaponChange = 0.00f;
    this->OverrideWeaponType = EPalWeaponType::MAX;
    this->bUnstoppable = false;
    this->bIsHoldTrigger = false;
    this->bBufferedInput = false;
    this->bIsShootingHold = false;
    this->bIsAttachRequest = false;
    this->bChangeIsShootingPulling = false;
    this->bChangeIsShootingRelaseRequest = false;
    this->NPCWeapon = NULL;
    this->CurrentBulletBlurRate = 0.00f;
    this->RapidFireBlur = 0.00f;
}

void UPalShooterComponent::StopWeaponChangeAnimation() {
}

void UPalShooterComponent::StopReloadInternal() {
}

void UPalShooterComponent::StopReload_ToServer_Implementation(int32 ID) {
}

void UPalShooterComponent::StopReload_ToALL_Implementation(int32 ID) {
}

void UPalShooterComponent::StopReload() {
}

void UPalShooterComponent::StopPullTriggerAnime_forBP() {
}

void UPalShooterComponent::StartAim() {
}

void UPalShooterComponent::SetUsedRightHand(FName flagName, bool bIsUsed) {
}

void UPalShooterComponent::SetUsedLeftHand(FName flagName, bool bIsUsed) {
}

void UPalShooterComponent::SetupInputComponent(UInputComponent* InputComponent) {
}

void UPalShooterComponent::SetTargetDirection_ToServer_Implementation(FVector NewTargetDirection) {
}

void UPalShooterComponent::SetTargetDirection_ByServer(FVector NewTargetDirection) {
}

void UPalShooterComponent::SetTargetDirection(const FVector& Direction) {
}

void UPalShooterComponent::SetShootingHold(bool IsHold) {
}

void UPalShooterComponent::SetOverrideWeaponType(EPalWeaponType Type) {
}

void UPalShooterComponent::SetHiddenAttachWeapon(FName flagName, bool isHidden) {
}

void UPalShooterComponent::SetDisableWeaponForUI(bool Disable) {
}

void UPalShooterComponent::SetDisableWeaponChangeAnime(FName flagName, bool bIsUsed) {
}

void UPalShooterComponent::SetDisableShootFlag_Layered(EPalShooterFlagContainerPriority Priority, FName flagName, bool isDisable) {
}

void UPalShooterComponent::SetDisableShootFlag(FName flagName, bool isDisable) {
}

void UPalShooterComponent::SetDisableReloadFlag(FName flagName, bool isDisable) {
}

void UPalShooterComponent::SetDisableLeftHandAttachFlag(FName flagName, bool isDisable) {
}

void UPalShooterComponent::SetDisableEndAim(FName flagName, bool isDisable) {
}

void UPalShooterComponent::SetDisableChangeWeaponFlag_Layered(EPalShooterFlagContainerPriority Priority, FName flagName, bool isDisable) {
}

void UPalShooterComponent::SetDisableChangeWeaponFlag(FName flagName, bool isDisable) {
}

void UPalShooterComponent::SetDisableAimFlag_Layered(EPalShooterFlagContainerPriority Priority, FName flagName, bool isDisable) {
}

void UPalShooterComponent::SetDisableAimFlag(FName flagName, bool isDisable) {
}

void UPalShooterComponent::ResetOverrideWeaponType() {
}

void UPalShooterComponent::ReloadWeaponInternal() {
}

void UPalShooterComponent::ReloadWeapon_ToServer_Implementation(int32 ID) {
}

void UPalShooterComponent::ReloadWeapon_ToALL_Implementation(int32 ID) {
}

void UPalShooterComponent::ReloadWeapon() {
}

void UPalShooterComponent::ReleaseTrigger() {
}

void UPalShooterComponent::PullTrigger() {
}

void UPalShooterComponent::OnWeaponNotify(EWeaponNotifyType Type) {
}

void UPalShooterComponent::OnWeaponAnimationNotifyEnd(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UPalShooterComponent::OnWeaponAnimationNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UPalShooterComponent::OnStartOwnerAction(const UPalActionBase* action) {
}

void UPalShooterComponent::OnOwnerAnimInitialized() {
}

void UPalShooterComponent::OnLanded(UPalCharacterMovementComponent* Component, const FHitResult& Hit) {
}

void UPalShooterComponent::OnJump(UPalCharacterMovementComponent* Component) {
}

void UPalShooterComponent::OnEndReloadAnimation(UAnimMontage* Montage, bool bInterrupted) {
}

void UPalShooterComponent::OnDead(FPalDeadInfo DeadInfo) {
}

void UPalShooterComponent::OnCrouch(UPalCharacterMovementComponent* Component, bool bIsCrouch) {
}

void UPalShooterComponent::OnChangeTargetDirection() {
}

void UPalShooterComponent::OnChangeChangeImportance(EPalCharacterImportanceType Next) {
}

bool UPalShooterComponent::IsShooting() const {
    return false;
}

bool UPalShooterComponent::IsReloading() const {
    return false;
}

bool UPalShooterComponent::IsPlayShootingAnimation() const {
    return false;
}

bool UPalShooterComponent::IsHiddenAttachWeapon() {
    return false;
}

bool UPalShooterComponent::IsAiming() const {
    return false;
}

UPalShooterAnimeAssetBase* UPalShooterComponent::GetThrowAnimAsset() {
    return NULL;
}

FVector UPalShooterComponent::GetTargetDirection() const {
    return FVector{};
}

FWeaponAnimationInfo UPalShooterComponent::GetPrevWeaponAnimationInfo() const {
    return FWeaponAnimationInfo{};
}

APalWeaponBase* UPalShooterComponent::GetHasWeapon() const {
    return NULL;
}

FWeaponAnimationInfo UPalShooterComponent::GetCurrentWeaponAnimationInfo() const {
    return FWeaponAnimationInfo{};
}

FRidingAnimationInfo UPalShooterComponent::GetCurrentRidingAnimationInfo() const {
    return FRidingAnimationInfo{};
}

float UPalShooterComponent::GetCurrentBulletBlurRate() {
    return 0.0f;
}

float UPalShooterComponent::GetChangeWeaponAnimationWeight() const {
    return 0.0f;
}

UPalShooterAnimeAssetBase* UPalShooterComponent::GetBowAnimAsset() {
    return NULL;
}

void UPalShooterComponent::EndAim() {
}

void UPalShooterComponent::ChangeWeapon(APalWeaponBase* Weapon) {
}

void UPalShooterComponent::ChangeIsShooting_ToServer_Implementation(int32 ID, bool NewIsShooting) {
}

void UPalShooterComponent::ChangeIsShooting_ToALL_Implementation(int32 ID, bool NewIsShooting) {
}

void UPalShooterComponent::ChangeIsShooting(bool NewIsShooting) {
}

void UPalShooterComponent::ChangeIsAiming_ToServer_Implementation(int32 ID, bool NewIsAiming) {
}

void UPalShooterComponent::ChangeIsAiming_ToALL_Implementation(int32 ID, bool NewIsAiming) {
}

void UPalShooterComponent::ChangeIsAiming(bool NewIsAiming) {
}

bool UPalShooterComponent::CanWeaponChangeAnime() {
    return false;
}

bool UPalShooterComponent::CanUseWeapon(APalWeaponBase* Weapon) const {
    return false;
}

bool UPalShooterComponent::CanUseRightHand() const {
    return false;
}

bool UPalShooterComponent::CanUseLeftHand() const {
    return false;
}

bool UPalShooterComponent::CanShoot() const {
    return false;
}

bool UPalShooterComponent::CanReload() const {
    return false;
}

bool UPalShooterComponent::CanLeftHandAttach() const {
    return false;
}

bool UPalShooterComponent::CanChangeNextWeapon_Layered(EPalShooterFlagContainerPriority Priority) const {
    return false;
}

bool UPalShooterComponent::CanChangeNextWeapon() const {
    return false;
}

bool UPalShooterComponent::CanAutoAim() const {
    return false;
}

bool UPalShooterComponent::CanAim() const {
    return false;
}

void UPalShooterComponent::BowPullAnimeEnd() {
}

void UPalShooterComponent::AttachWeapon_ForPartnerSkillPalWeapon_ToAll_Implementation(APalWeaponBase* Weapon) {
}

void UPalShooterComponent::AttachWeapon_ForNPC_ToAll_Implementation(bool IsNotNull) {
}

void UPalShooterComponent::AttachWeapon(APalWeaponBase* Weapon) {
}

void UPalShooterComponent::AddRapidFireBlur() {
}

void UPalShooterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalShooterComponent, targetDirection);
    DOREPLIFETIME(UPalShooterComponent, RandomStream);
}



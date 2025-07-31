#include "PalCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

UPalCharacterMovementComponent::UPalCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableCheckHalfHeightForStepup = true;
    this->bEnableServerDualMoveScopedMovementUpdates = true;
    this->bCanWalkOffLedgesWhenCrouching = true;
    this->DyingMaxSpeed = 100.00f;
    this->FatigueMaxSpeed = 100.00f;
    this->SprintMaxSpeed = 1200.00f;
    this->SprintMaxAcceleration = 2048.00f;
    this->SprintYawRate = 0.30f;
    this->GliderMaxSpeed = 1000.00f;
    this->GliderAirControl = 1.00f;
    this->GliderGravityScale = 0.01f;
    this->SlidingStartSpeed = 1800.00f;
    this->bUseCurrentSpeedIfOverSlidingStartSpeed = false;
    this->SlidingMaxSpeed = 1800.00f;
    this->SlidingAddRate = 2.00f;
    this->SlidingSubRate = 1.00f;
    this->bUseSlidingAddValue = false;
    this->SlidingAddValue = 0.00f;
    this->bUseSlidingSubValue = false;
    this->SlidingSubValue = 0.00f;
    this->SlidingYawRate = 0.01f;
    this->bIsEnableSkySliding = false;
    this->ClimbMaxSpeed = 100.00f;
    this->RollingMaxSpeed = 0.00f;
    this->GrapplingMaxSpeed = 0.00f;
    this->LastLandedTransformCacheNum = 30;
    this->bIsUseLastLandedCache = false;
    this->OverrideFlySpeed = -1.00f;
    this->OverrideFlySprintSpeed = -1.00f;
    this->SearchAgentRadiusFactor = 1.00f;
    this->SwimMaxAcceleration = 2048.00f;
    this->bRequestCrouch = false;
    this->bRequestGliding = false;
    this->bRequestEndRolling = false;
    this->bRequestSprint = false;
    this->SlowWalkSpeed_Default = 0.00f;
    this->WalkSpeed_Default = 0.00f;
    this->RunSpeed_Default = 0.00f;
    this->RideSprintSpeed_Default = 0.00f;
    this->FlySpeed_Default = 0.00f;
    this->FlySprintSpeed_Default = 0.00f;
    this->SwimSpeed_Default = 0.00f;
    this->SwimDashSpeed_Default = 0.00f;
    this->TransportSpeed_Default = 0.00f;
    this->TemporaryAccelerationTimeCount = 0.00f;
    this->IsFlyDashMode = false;
    this->DefaultMaxStepHeight = 0.00f;
    this->bSimulatedJump = false;
    this->LastNetRole = ROLE_None;
    this->CustomMovementMode_ForReplicate = EPalCharacterMovementCustomMode::None;
    this->InWaterRate = 0.65f;
    this->DashSwimMaxSpeed = 500.00f;
    this->JumpableInWaterDepth = 30.00f;
    this->EnteredWaterFlag = EEnterWaterFlag::None;
    this->WaterPlaneZ = 340282346638528859811704183484516925440.00f;
    this->WaterPlaneZPrev = 340282346638528859811704183484516925440.00f;
    this->WaitTimeToSwimInFalling = 0.00f;
    this->bIsDashSwim = false;
    this->CacheTickInterval = 0.00f;
    this->ReserveTickInterval = 0.00f;
}

void UPalCharacterMovementComponent::StartGrappling(const FVector& HitLocation, const FVector& HitNormal) {
}

void UPalCharacterMovementComponent::SetYawRotatorMultiplier(FName flagName, float Rate) {
}

void UPalCharacterMovementComponent::SetWalkSpeedMultiplier(FName flagName, float Speed) {
}

void UPalCharacterMovementComponent::SetWalkSpeedByType(FName flagName, EPalMovementSpeedType MoveSpeedType) {
}

void UPalCharacterMovementComponent::SetWalkableFloorAngleOverrides(EPalWalkableFloorAnglePriority Priority, float Angle) {
}

void UPalCharacterMovementComponent::SetupDatabaseSpeedByCharacterId(APalCharacter* InCharacter, FName charaID) {
}

void UPalCharacterMovementComponent::SetupDatabaseSpeed(APalCharacter* InCharacter) {
}

void UPalCharacterMovementComponent::SetSwimSpeedMultiplier(FName flagName, float Speed) {
}

void UPalCharacterMovementComponent::SetSwimAccelerationMultiplier(FName flagName, float Speed) {
}

void UPalCharacterMovementComponent::SetStepDisableFlag(FName flagName, bool isDisable) {
}

void UPalCharacterMovementComponent::SetSplintDisbleFlag(FName flagName, bool Disable) {
}

void UPalCharacterMovementComponent::SetSlidingDisbleFlag(FName flagName, bool Disable) {
}

void UPalCharacterMovementComponent::SetSlideAlphaMultiplier(FName flagName, float Rate) {
}

void UPalCharacterMovementComponent::SetPysicsAccelerationFlag(FName flagName, bool IsEnable) {
}

void UPalCharacterMovementComponent::SetPendingSliding(bool bEnabled) {
}

void UPalCharacterMovementComponent::SetNetworkSmoothingMode(ENetworkSmoothingMode NewMode, bool bResetMeshLocation) {
}

void UPalCharacterMovementComponent::SetNavWalkDisableFlag(FName flagName, bool isDisable) {
}

void UPalCharacterMovementComponent::SetMoveDisableFlag(FName flagName, bool isDisable) {
}

void UPalCharacterMovementComponent::SetMaxAccelerationMultiplier(FName flagName, float Speed) {
}

void UPalCharacterMovementComponent::SetLeanBackDisableFlag(FName flagName, bool isDisable) {
}

void UPalCharacterMovementComponent::SetJumpDisableFlag(FName flagName, bool isDisable) {
}

void UPalCharacterMovementComponent::SetInputDisableFlag(FName flagName, bool isDisable) {
}

void UPalCharacterMovementComponent::SetGravityZMultiplier(FName flagName, float Rate) {
}

void UPalCharacterMovementComponent::SetGliderDisbleFlag(FName flagName, bool Disable) {
}

void UPalCharacterMovementComponent::SetForceMaxAccel(bool bIsEnable) {
}

void UPalCharacterMovementComponent::SetFlyDashMode_ToServer_Implementation(bool IsDash) {
}

void UPalCharacterMovementComponent::SetDriveMoveFlag(FName flagName, bool IsEnable) {
}

void UPalCharacterMovementComponent::SetDisableTickOptimization(FName flagName, bool isDisable) {
}

void UPalCharacterMovementComponent::SetDisableLeftHandAttachFlag(bool isDisable) {
}

void UPalCharacterMovementComponent::SetDashSwimming_ToServer_Implementation(bool _isDash) {
}

void UPalCharacterMovementComponent::SetDashSwimming(bool _isDash) {
}

void UPalCharacterMovementComponent::SetCustomMovementMode(EPalCharacterMovementCustomMode NewCustomMode) {
}

void UPalCharacterMovementComponent::SetCrouchDisbleFlag(FName flagName, bool Disable) {
}

void UPalCharacterMovementComponent::SetBlowVelocityDisableFlag(FName flagName, bool isDisable) {
}

void UPalCharacterMovementComponent::SetAirControlXYMultiplier(FName flagName, float Rate) {
}

void UPalCharacterMovementComponent::SetActionInterrupt_ToServer_Implementation(EPalCharacterMovementCustomMode InCustomMode, bool InInterrupt) {
}

void UPalCharacterMovementComponent::ResetNetworkSmoothingModeToDefault(bool bResetMeshLocation) {
}

void UPalCharacterMovementComponent::ResetLastLandingLocationCache() {
}

void UPalCharacterMovementComponent::RequestTemporaryAcceleration() {
}

void UPalCharacterMovementComponent::RequestEndRolling(bool bEndRolling) {
}

void UPalCharacterMovementComponent::RemoveWalkableFloorAngleOverrides(EPalWalkableFloorAnglePriority Priority) {
}

void UPalCharacterMovementComponent::OnRep_CustomMovementMode_ForReplicate() {
}

void UPalCharacterMovementComponent::OnExitWater() {
}

void UPalCharacterMovementComponent::OnEnterWater() {
}

void UPalCharacterMovementComponent::OnDeactivated(UActorComponent* Component) {
}

void UPalCharacterMovementComponent::OnChangeCrouch(UPalCharacterMovementComponent* Component, bool IsInCrouch) {
}

void UPalCharacterMovementComponent::OnChangeActiveCharacter(bool bInIsActive) {
}

void UPalCharacterMovementComponent::MergeLastLandingLocationCache(const UPalCharacterMovementComponent* MovementComponent) {
}

void UPalCharacterMovementComponent::Jump() {
}

bool UPalCharacterMovementComponent::IsTickOptimizationDisabled() const {
    return false;
}

bool UPalCharacterMovementComponent::IsSteppingShallows() const {
    return false;
}

bool UPalCharacterMovementComponent::IsStepDisabled() const {
    return false;
}

bool UPalCharacterMovementComponent::IsSprint() const {
    return false;
}

bool UPalCharacterMovementComponent::IsSliding() const {
    return false;
}

bool UPalCharacterMovementComponent::IsRolling() const {
    return false;
}

bool UPalCharacterMovementComponent::IsRequestSliding() const {
    return false;
}

bool UPalCharacterMovementComponent::IsRequestGliding() const {
    return false;
}

bool UPalCharacterMovementComponent::IsRequestEndRolling() const {
    return false;
}

bool UPalCharacterMovementComponent::IsPysicsAcceleration() const {
    return false;
}

bool UPalCharacterMovementComponent::IsPendingSliding() const {
    return false;
}

bool UPalCharacterMovementComponent::IsNavWalkDisabled() const {
    return false;
}

bool UPalCharacterMovementComponent::IsMoveDisabled() const {
    return false;
}

bool UPalCharacterMovementComponent::IsLeanBackDisabled() const {
    return false;
}

bool UPalCharacterMovementComponent::IsJumpDisabled() const {
    return false;
}

bool UPalCharacterMovementComponent::IsInputDisabled() const {
    return false;
}

bool UPalCharacterMovementComponent::IsGrappling() const {
    return false;
}

bool UPalCharacterMovementComponent::IsGliding() const {
    return false;
}

bool UPalCharacterMovementComponent::IsFallingFromSwimming() const {
    return false;
}

bool UPalCharacterMovementComponent::IsEnteredWater() const {
    return false;
}

bool UPalCharacterMovementComponent::IsEnableSkySliding() const {
    return false;
}

bool UPalCharacterMovementComponent::IsDriveMove() const {
    return false;
}

bool UPalCharacterMovementComponent::IsDashSwimming() const {
    return false;
}

bool UPalCharacterMovementComponent::IsClimbing() const {
    return false;
}

bool UPalCharacterMovementComponent::IsBlowVelocityDisabled() const {
    return false;
}

bool UPalCharacterMovementComponent::IsAboveWater() const {
    return false;
}

float UPalCharacterMovementComponent::GetYawRotatorMultiplier() const {
    return 0.0f;
}

FVector UPalCharacterMovementComponent::GetWaterPlaneNormal() const {
    return FVector{};
}

FVector UPalCharacterMovementComponent::GetWaterPlaneLocation() const {
    return FVector{};
}

float UPalCharacterMovementComponent::GetWalkSpeedMultiplier() const {
    return 0.0f;
}

float UPalCharacterMovementComponent::GetWalkableFloorAngleByPriority() const {
    return 0.0f;
}

FVector UPalCharacterMovementComponent::GetVelocity() const {
    return FVector{};
}

float UPalCharacterMovementComponent::GetSwimSpeedMultiplier() const {
    return 0.0f;
}

float UPalCharacterMovementComponent::GetSwimAccelerationMultiplier() const {
    return 0.0f;
}

float UPalCharacterMovementComponent::GetSlideAlphaMultiplier() const {
    return 0.0f;
}

EPalMovementSpeedType UPalCharacterMovementComponent::GetMovementSpeedTypeLesserThan(const float Speed) const {
    return EPalMovementSpeedType::SlowWalk;
}

float UPalCharacterMovementComponent::GetMaxAccelerationMultiplier() const {
    return 0.0f;
}

FVector UPalCharacterMovementComponent::GetLastLandingLocationFromLastOfCache() const {
    return FVector{};
}

FVector UPalCharacterMovementComponent::GetLastLandingLocation() const {
    return FVector{};
}

float UPalCharacterMovementComponent::GetInWaterRate() const {
    return 0.0f;
}

float UPalCharacterMovementComponent::GetGravityZMultiplier() const {
    return 0.0f;
}

FVector UPalCharacterMovementComponent::GetGrapplingMoveHitLocation() const {
    return FVector{};
}

FVector UPalCharacterMovementComponent::GetGrapplingMoveEndLocation() const {
    return FVector{};
}

FVector UPalCharacterMovementComponent::GetGrapplingHitNormal() const {
    return FVector{};
}

float UPalCharacterMovementComponent::GetDefaultWalkSpeedByType(EPalMovementSpeedType MoveSpeedType) const {
    return 0.0f;
}

float UPalCharacterMovementComponent::GetDefaultRunSpeed() {
    return 0.0f;
}

EPalCharacterMovementCustomMode UPalCharacterMovementComponent::GetCustomMovementMode() const {
    return EPalCharacterMovementCustomMode::None;
}

float UPalCharacterMovementComponent::GetAirControlXYMultiplier() const {
    return 0.0f;
}

TMap<EPalCharacterMovementCustomMode, UPalActionMovementModeBase*> UPalCharacterMovementComponent::GetActionMovementModeMap() const {
    return TMap<EPalCharacterMovementCustomMode, UPalActionMovementModeBase*>();
}

UPalActionMovementModeBase* UPalCharacterMovementComponent::GetActionMovementMode(EPalCharacterMovementCustomMode CustomMode) const {
    return NULL;
}

void UPalCharacterMovementComponent::Debug_SetEnableBuoyancyTestMode(bool IsEnable) {
}

void UPalCharacterMovementComponent::CheckReturnToNavWakl() {
}

bool UPalCharacterMovementComponent::CanSliding() const {
    return false;
}

bool UPalCharacterMovementComponent::CanGainSP() const {
    return false;
}

bool UPalCharacterMovementComponent::CanDashSwimming() const {
    return false;
}

void UPalCharacterMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalCharacterMovementComponent, CustomMovementMode_ForReplicate);
    DOREPLIFETIME(UPalCharacterMovementComponent, bIsDashSwim);
}



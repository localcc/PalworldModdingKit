#include "PalCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

UPalCharacterMovementComponent::UPalCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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
    this->SlidingMaxSpeed = 1800.00f;
    this->SlidingAddRate = 2.00f;
    this->SlidingSubRate = 1.00f;
    this->SlidingYawRate = 0.01f;
    this->bIsEnableSkySliding = false;
    this->ClimbMaxSpeed = 100.00f;
    this->RollingMaxSpeed = 0.00f;
    this->GrapplingMaxSpeed = 0.00f;
    this->LastLandedTransformCacheNum = 30;
    this->bIsUseLastLandedCache = false;
    this->bRequestCrouch = false;
    this->bRequestSprint = false;
    this->SlowWalkSpeed_Default = 0.00f;
    this->WalkSpeed_Default = 0.00f;
    this->RunSpeed_Default = 0.00f;
    this->RideSprintSpeed_Default = 0.00f;
    this->TransportSpeed_Default = 0.00f;
    this->TemporaryAccelerationTimeCount = 0.00f;
    this->IsFlyDashMode = false;
    this->DefaultMaxStepHeight = 0.00f;
    this->CustomMovementMode_ForReplicate = EPalCharacterMovementCustomMode::None;
    this->InWaterRate = 0.65f;
    this->DashSwimMaxSpeed = 500.00f;
    this->JumpableInWaterDepth = 30.00f;
    this->EnteredWaterFlag = EEnterWaterFlag::None;
    this->WaterPlaneZ = 340282346638528859811704183484516925440.00f;
    this->WaterPlaneZPrev = 340282346638528859811704183484516925440.00f;
    this->WaitTimeToSwimInFalling = 0.00f;
    this->bIsDashSwim = false;
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

void UPalCharacterMovementComponent::SetNavWalkDisableFlag(FName flagName, bool isDisable) {
}

void UPalCharacterMovementComponent::SetMoveDisableFlag(FName flagName, bool isDisable) {
}

void UPalCharacterMovementComponent::SetMaxAccelerationMultiplier(FName flagName, float Speed) {
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

void UPalCharacterMovementComponent::SetAirControlXYMultiplier(FName flagName, float Rate) {
}

void UPalCharacterMovementComponent::ResetLastLandingLocationCache() {
}

void UPalCharacterMovementComponent::RequestTemporaryAcceleration() {
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

bool UPalCharacterMovementComponent::IsStepDisabled() const {
    return false;
}

bool UPalCharacterMovementComponent::IsSprint() const {
    return false;
}

bool UPalCharacterMovementComponent::IsSliding() const {
    return false;
}

bool UPalCharacterMovementComponent::IsRequestSliding() const {
    return false;
}

bool UPalCharacterMovementComponent::IsPysicsAcceleration() const {
    return false;
}

bool UPalCharacterMovementComponent::IsNavWalkDisabled() const {
    return false;
}

bool UPalCharacterMovementComponent::IsMoveDisabled() const {
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

float UPalCharacterMovementComponent::GetSlideAlphaMultiplier() const {
    return 0.0f;
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

float UPalCharacterMovementComponent::GetDefaultRunSpeed() {
    return 0.0f;
}

EPalCharacterMovementCustomMode UPalCharacterMovementComponent::GetCustomMovementMode() const {
    return EPalCharacterMovementCustomMode::None;
}

float UPalCharacterMovementComponent::GetAirControlXYMultiplier() const {
    return 0.0f;
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



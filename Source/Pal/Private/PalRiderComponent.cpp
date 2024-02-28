#include "PalRiderComponent.h"
#include "Net/UnrealNetwork.h"

UPalRiderComponent::UPalRiderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FullRidePalController = NULL;
    this->RideShakingMontage = NULL;
    this->DefaultJumpZVelocity = 0.00f;
}

void UPalRiderComponent::StopShakingMontage() {
}

void UPalRiderComponent::SetRideMarker_ToServer_Implementation(int32 ID, UPalRideMarkerComponent* Marker) {
}

void UPalRiderComponent::SetRideMarker_ToALL_Implementation(int32 ID, UPalRideMarkerComponent* Marker) {
}

void UPalRiderComponent::SetRideMarker_Internal(UPalRideMarkerComponent* Marker) {
}

void UPalRiderComponent::SetRideMarker(UPalRideMarkerComponent* Marker) {
}

void UPalRiderComponent::SetDisableUniqueRideIK(FName flagName, bool isDisable) {
}

void UPalRiderComponent::SetDisableRide(FName flagName, bool bIsDisable) {
}

void UPalRiderComponent::SetDisableGetOff(FName flagName, bool bIsDisable) {
}

void UPalRiderComponent::SetDisableAdjustRotation(FName flagName, bool bIsDisable) {
}

void UPalRiderComponent::RideClientRep(UPalRideMarkerComponent* Marker) {
}

bool UPalRiderComponent::Ride(UPalRideMarkerComponent* Marker, bool bIsSkipAnimation) {
    return false;
}

void UPalRiderComponent::PlayShakingMontage(UAnimMontage* overrideMontage, float PlayRate) {
}

void UPalRiderComponent::OnStartInteractInClient(TScriptInterface<IPalInteractiveObjectComponentInterface> Object) {
}

void UPalRiderComponent::OnStartInteractForServer_Implementation() {
}

void UPalRiderComponent::OnStartAim() {
}

void UPalRiderComponent::OnSleepPlayer(int32 LastDamage) {
}

void UPalRiderComponent::OnSleep(int32 LastDamage) {
}

void UPalRiderComponent::OnInactive() {
}

void UPalRiderComponent::OnEndInteractInClient() {
}

void UPalRiderComponent::OnEndInteractForServer_Implementation() {
}

void UPalRiderComponent::OnEndAim() {
}

void UPalRiderComponent::OnDeadPlayer(FPalDeadInfo DeadInfo) {
}

void UPalRiderComponent::OnDead(FPalDeadInfo DeadInfo) {
}

void UPalRiderComponent::OnChangeActive(bool IsActive) {
}

void UPalRiderComponent::OnCaptureStart() {
}

bool UPalRiderComponent::IsRiding() const {
    return false;
}

bool UPalRiderComponent::IsDisableRide() {
    return false;
}

bool UPalRiderComponent::IsDisableGetOff() {
    return false;
}

bool UPalRiderComponent::IsDisableAdjustRotation() {
    return false;
}

UPalUniqueRideAnimeAssetBase* UPalRiderComponent::GetUniqueRideAnimeAsset() {
    return NULL;
}

AActor* UPalRiderComponent::GetRindingActor() const {
    return NULL;
}

bool UPalRiderComponent::GetRiderModelIsBackward() {
    return false;
}

UPalRideMarkerComponent* UPalRiderComponent::GetRideMarker() const {
    return NULL;
}

bool UPalRiderComponent::GetOff(bool bIsSkipAnimation, bool bNoAnimCancel) {
    return false;
}

EPalRidePositionType UPalRiderComponent::GetCurrentRidePositionType() const {
    return EPalRidePositionType::None;
}

void UPalRiderComponent::DettachRiderNoAnimation_ToServer_Implementation(int32 ID) {
}

void UPalRiderComponent::DettachRiderNoAnimation_ToALL_Implementation(int32 ID) {
}

void UPalRiderComponent::DettachRiderNoAnimation() {
}

void UPalRiderComponent::DettachRider_ToServer_Implementation(int32 ID) {
}

void UPalRiderComponent::DettachRider_ToALL_Implementation(int32 ID) {
}

void UPalRiderComponent::DettachRider() {
}

bool UPalRiderComponent::CanUniqueRideIK() {
    return false;
}

void UPalRiderComponent::AttachRiderNoAnimation_ToServer_Implementation(int32 ID) {
}

void UPalRiderComponent::AttachRiderNoAnimation_ToALL_Implementation(int32 ID) {
}

void UPalRiderComponent::AttachRiderNoAnimation() {
}

bool UPalRiderComponent::AttachRider() {
    return false;
}

void UPalRiderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalRiderComponent, RidingMarker);
    DOREPLIFETIME(UPalRiderComponent, InitialMeshLocation);
}



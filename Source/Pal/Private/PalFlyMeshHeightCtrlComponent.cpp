#include "PalFlyMeshHeightCtrlComponent.h"
#include "Net/UnrealNetwork.h"

UPalFlyMeshHeightCtrlComponent::UPalFlyMeshHeightCtrlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlingAdditionalHeight = 0.00f;
    this->HighFlingAddtionalHeight = 0.00f;
    this->State = EPalFlyHeightType::Stop;
    this->bIsHighFling = false;
    this->bIsHighFlingCache = false;
    this->SK = NULL;
}

void UPalFlyMeshHeightCtrlComponent::ToLand_All_Implementation(float Duration) {
}

void UPalFlyMeshHeightCtrlComponent::ToLand(float Duration) {
}

void UPalFlyMeshHeightCtrlComponent::ToFly_All_Implementation(float Duration) {
}

void UPalFlyMeshHeightCtrlComponent::ToFly(float Duration) {
}

void UPalFlyMeshHeightCtrlComponent::SetupMesh() {
}

void UPalFlyMeshHeightCtrlComponent::OnUpdatePlayerHp(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP) {
}

void UPalFlyMeshHeightCtrlComponent::OnRep_bIsHighFling() {
}

void UPalFlyMeshHeightCtrlComponent::OnInitializedCharacter(APalCharacter* OwnerCharacter) {
}

void UPalFlyMeshHeightCtrlComponent::OnDead(FPalDeadInfo Info) {
}

void UPalFlyMeshHeightCtrlComponent::OnChangeBattleMode(bool bIsBattleMode) {
}

bool UPalFlyMeshHeightCtrlComponent::IsFlying() const {
    return false;
}

void UPalFlyMeshHeightCtrlComponent::HighFlingEnd_Server() {
}

void UPalFlyMeshHeightCtrlComponent::HighFlingEnd_Implementation() {
}

float UPalFlyMeshHeightCtrlComponent::GetDefaultMeshLocationZ() {
    return 0.0f;
}

void UPalFlyMeshHeightCtrlComponent::Debug_ForceHighFlingEnd() {
}

void UPalFlyMeshHeightCtrlComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalFlyMeshHeightCtrlComponent, bIsHighFling);
}



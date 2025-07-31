#include "PalNetworkFishingComponent.h"

UPalNetworkFishingComponent::UPalNetworkFishingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkFishingComponent::SuccessCatchBattle_ToServer_Implementation() {
}

void UPalNetworkFishingComponent::StartFishing_ToServer_Implementation() {
}

void UPalNetworkFishingComponent::StartCatchBattle_ToServer_Implementation(const FGuid& SpotAreaId, const FGuid& TargetFishShadowId) {
}

void UPalNetworkFishingComponent::SetRodState_ToServer_Implementation(EPalFishingRodState State) {
}

void UPalNetworkFishingComponent::SetFloatLocation_ToServer_Implementation(FVector FloatLocation) {
}

void UPalNetworkFishingComponent::RequestUseBait_ToServer_Implementation(const FGuid& RequestPlayerUId, const FName BaitItemId) {
}

void UPalNetworkFishingComponent::RequestRecordFirstFishing_ToServer_Implementation() {
}

void UPalNetworkFishingComponent::RequestObtainCatchCharacter_ToServer_Implementation(const FGuid& SpotId, const FGuid& FishShadowId) {
}

void UPalNetworkFishingComponent::RequestFishing_ToServer_Implementation(const FGuid& SpotId, const FGuid& FishShadowId) {
}

void UPalNetworkFishingComponent::RequestEscapeFishShadow_ToServer_Implementation(const FGuid& SpotId, const FGuid& FishShadowId) {
}

void UPalNetworkFishingComponent::ReceiveUseBaitResult_ToClient_Implementation(bool IsSuccess, const FName BaitItemId) {
}

void UPalNetworkFishingComponent::ReceiveFishingResult_ToClinet_Implementation(EPalFishingResultType resultType) {
}

void UPalNetworkFishingComponent::ReceiveEscapeFishShadow_ToClinet_Implementation(const FGuid& SpotId, const FGuid& FishShadowId) {
}

void UPalNetworkFishingComponent::FinishCutscene_ToServer_Implementation() {
}

void UPalNetworkFishingComponent::FailedCatchBattle_ToServer_Implementation() {
}

void UPalNetworkFishingComponent::EndFishing_ToServer_Implementation() {
}

void UPalNetworkFishingComponent::EndCatchBattle_ToServer_Implementation() {
}

void UPalNetworkFishingComponent::CancelFishing_ToServer_Implementation() {
}



#include "PalNetworkPlayerComponent.h"
#include "Templates/SubclassOf.h"

UPalNetworkPlayerComponent::UPalNetworkPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkPlayerComponent::ShowUnlockHardModeUI_ToClient_Implementation() {
}

void UPalNetworkPlayerComponent::ShowBossDefeatRewardUI_ToClient_Implementation(int32 TechPoint, bool AfterTeleport, int32 DelayTime) {
}

void UPalNetworkPlayerComponent::SetCurrentSelectPalSphereIndex_ToServer_Implementation(int32 NextIndex, UPalLoadoutSelectorComponent* LoadoutSelector) {
}

void UPalNetworkPlayerComponent::RequestUnlockTechnology_ToServer_Implementation(const FName& UnlockTechnologyName) {
}

void UPalNetworkPlayerComponent::RequestSortInventory_ToServer_Implementation() {
}

void UPalNetworkPlayerComponent::RequestMoveItemToInventoryFromSlot_Implementation(UPalItemSlot* fromSlot, bool IsTryEquip) {
}

void UPalNetworkPlayerComponent::RequestMoveItemToInventoryFromContainer_Implementation(UPalItemContainer* fromContainer, bool IsTryEquip) {
}

void UPalNetworkPlayerComponent::RequestExitStage_ToServer_Implementation() {
}

void UPalNetworkPlayerComponent::RequestEnterStage_ToServer_Implementation(const FPalStageInstanceId& StageInstanceId) {
}

void UPalNetworkPlayerComponent::RequestDropOtomoPal_ToServer_Implementation(const int32 OtomoIndex) {
}

void UPalNetworkPlayerComponent::RequestChangeVoiceID_ToServer_Implementation(int32 NewVoiceID) {
}

void UPalNetworkPlayerComponent::RequestAddTechnolgyPointByItem_ToServer_Implementation(const FPalItemSlotId& ConsumeItemSlotID) {
}

void UPalNetworkPlayerComponent::RequestAddTechnolgyPoint_ToServer_Implementation(const int32 AddPoint) {
}

void UPalNetworkPlayerComponent::RequestAddItem_ToServer_Implementation(const FName StaticItemId, const int32 Count, bool IsAssignPassive) {
}

void UPalNetworkPlayerComponent::RequestAddBossTechnolgyPointByItem_ToServer_Implementation(const FPalItemSlotId& ConsumeItemSlotID) {
}

void UPalNetworkPlayerComponent::RegisterRespawnLocation_ToServer_Implementation(const FGuid& PlayerUId, const FVector& Location) {
}

void UPalNetworkPlayerComponent::ReceiveExitStageRequestResult_ToRequestClient_Implementation(const EPalStageRequestResult Result) {
}

void UPalNetworkPlayerComponent::ReceiveEnterStageRequestResult_ToRequestClient_Implementation(const FPalStageInstanceId& StageInstanceId, const EPalStageRequestResult Result) {
}

void UPalNetworkPlayerComponent::NotifyUnlockAchievement_ToClient_Implementation(const FString& AchievementId) {
}

void UPalNetworkPlayerComponent::NotifyStartCrime_ToClient_Implementation(FGuid CrimeInstanceId) {
}

void UPalNetworkPlayerComponent::NotifyReportCriminal_ToClient_Implementation(UPalIndividualCharacterHandle* CriminalHandle, const TArray<FName>& CrimeIds) {
}

void UPalNetworkPlayerComponent::NotifyReleaseWanted_ToClient_Implementation(UPalIndividualCharacterHandle* CriminalHandle) {
}

void UPalNetworkPlayerComponent::NotifyQuestCompleted_Implementation(TSubclassOf<UPalQuestData> CompletedQuestDataClass) {
}

void UPalNetworkPlayerComponent::NotifyEndCrime_ToClient_Implementation(FGuid CrimeInstanceId) {
}

void UPalNetworkPlayerComponent::LoadoutSelectorRemoveEquipItem_Implementation(UPalLoadoutSelectorComponent* LoadoutSelector) {
}

void UPalNetworkPlayerComponent::LoadoutSelectorEquipItem_Implementation(UPalLoadoutSelectorComponent* LoadoutSelector, EPalPlayerInventoryType inventoryType, int32 Index) {
}

void UPalNetworkPlayerComponent::Dev_RequestTeleportToDungeonEntranceByIndex_ToServer_Implementation(const int32 Index) {
}

void UPalNetworkPlayerComponent::Dev_RequestTeleportToDungeonEntranceByDataLayer_ToServer_Implementation(const FName DataLayerName) {
}

void UPalNetworkPlayerComponent::Dev_RequestTeleportToCurrentDungeonTreasureBox_ToServer_Implementation() {
}

void UPalNetworkPlayerComponent::Dev_RequestTeleportToCurrentDungeonGoal_ToServer_Implementation() {
}

void UPalNetworkPlayerComponent::Dev_RequestTeleportToBossTower_ToServer_Implementation(EPalBossType BossType) {
}



#include "PalNetworkQuestComponent.h"

UPalNetworkQuestComponent::UPalNetworkQuestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkQuestComponent::RequestProgressQuest_ToServer_Implementation(const FName& QuestId) {
}

void UPalNetworkQuestComponent::RequestOrderQuest_ToServer_Implementation(const FName& OrderQuestId) {
}

void UPalNetworkQuestComponent::RequestOrderInitialQuest_ToServer_Implementation() {
}

void UPalNetworkQuestComponent::RequestCompleteQuest_ToServer_Implementation(const FName& QuestId) {
}

void UPalNetworkQuestComponent::NotifyOrderedQuest_ToClient_Implementation(const FName& QuestId) {
}

void UPalNetworkQuestComponent::NotifyOpenSurvivalGuide_ToServer_Implementation() {
}

void UPalNetworkQuestComponent::NotifyCompleteQuest_ToClient_Implementation(const FName& QuestId) {
}

void UPalNetworkQuestComponent::GetQuestItem_LevelObject_Implementation(APalLevelObjectQuestItem* LevelObject) {
}

void UPalNetworkQuestComponent::DisplayOtomo_NPCTalk_ToServer_Implementation(const FName& QuestId, const FPalNetworkNPCTalkRequestData& RequestData) {
}

void UPalNetworkQuestComponent::DeliveryPal_NPCTalk_ToServer_Implementation(const FName& QuestId, const FPalNetworkNPCTalkRequestData& RequestData, const TArray<FPalCharacterSlotId>& DeliverySlotIdArray) {
}

void UPalNetworkQuestComponent::DeliveryItem_NPCTalk_ToServer_Implementation(const FName& QuestId, const FPalNetworkNPCTalkRequestData& RequestData) {
}



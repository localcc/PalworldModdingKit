#include "PalQuestManager.h"
#include "Net/UnrealNetwork.h"

UPalQuestManager::UPalQuestManager() {
    this->QuestDataSet = NULL;
    this->CommonRewardGiver = NULL;
}

void UPalQuestManager::TrackingQuest(const FName& QuestName) {
}

void UPalQuestManager::RemoveTracking() {
}

void UPalQuestManager::OrderQuest_ServerInternal(const FName& QuestName, int32 FirstBlockIndex) {
}

void UPalQuestManager::OnUpdatedQuest_ServerInternal(UPalQuestData* UpdatedQuest) {
}

void UPalQuestManager::OnRep_OrderedQuestArray() {
}

void UPalQuestManager::OnRemovedLocation(const FGuid& LocationId, UPalLocationBase* Location) {
}

void UPalQuestManager::OnReadyQuest_ServerInternal(UPalQuestData* QuestData) {
}

void UPalQuestManager::OnDisplayCharacterHPGauge(UPalIndividualCharacterParameter* Parameter) {
}

void UPalQuestManager::OnDeleteCharacterHPGauge(UPalIndividualCharacterParameter* Parameter) {
}

void UPalQuestManager::OnCompletedQuest_ServerInternal(UPalQuestData* CompletedQuest) {
}

bool UPalQuestManager::IsQuestOrdered(const FName& QuestId) const {
    return false;
}

bool UPalQuestManager::IsQuestCompleted(const FName& QuestId) const {
    return false;
}

bool UPalQuestManager::IsAllQuestComplete() {
    return false;
}

FName UPalQuestManager::GetTrackingQuestId() const {
    return NAME_None;
}

TArray<FName> UPalQuestManager::GetQuestIdRowName() const {
    return TArray<FName>();
}

UPalQuestData* UPalQuestManager::GetQuestData(const FName& QuestId) const {
    return NULL;
}

float UPalQuestManager::GetNearestQuestLocationDistance(const FName& QuestId) const {
    return 0.0f;
}

TArray<UPalQuestData*> UPalQuestManager::GetAllOrderedQuest() const {
    return TArray<UPalQuestData*>();
}

TArray<FName> UPalQuestManager::GetAllCompletedQuestId() const {
    return TArray<FName>();
}

void UPalQuestManager::ForceCompleteQuest_ServerInternal(const FName& QuestName) {
}

bool UPalQuestManager::CanReorderableQuest(const FName& QuestId) const {
    return false;
}

void UPalQuestManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestManager, QuestReplicationData);
    DOREPLIFETIME(UPalQuestManager, CompletedQuestNames);
}



#include "PalQuestManager.h"

void UPalQuestManager::OnUpdatedQuest(UPalQuestData* UpdatedQuest) {
}

void UPalQuestManager::OnCompletedQuest(UPalQuestData* CompletedQuest) {
}

bool UPalQuestManager::IsAllQuestComplete() {
    return false;
}

UPalQuestManager::UPalQuestManager() {
    this->QuestDataSet = NULL;
    this->CommonRewardGiver = NULL;
}


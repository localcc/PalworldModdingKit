#include "PalQuestManager.h"

UPalQuestManager::UPalQuestManager() {
    this->QuestDataSet = NULL;
    this->CommonRewardGiver = NULL;
}

void UPalQuestManager::OnUpdatedQuest(UPalQuestData* UpdatedQuest) {
}

void UPalQuestManager::OnCompletedQuest(UPalQuestData* CompletedQuest) {
}

bool UPalQuestManager::IsAllQuestComplete() {
    return false;
}



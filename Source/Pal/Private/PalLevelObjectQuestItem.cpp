#include "PalLevelObjectQuestItem.h"

APalLevelObjectQuestItem::APalLevelObjectQuestItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestBlockClass = NULL;
}

void APalLevelObjectQuestItem::RemovePickupBlockInLocal() {
}

void APalLevelObjectQuestItem::OnUpdateInventory(UPalItemContainer* Container) {
}

void APalLevelObjectQuestItem::OnUpdatedQuest(const FName& InQuestId) {
}

void APalLevelObjectQuestItem::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}


void APalLevelObjectQuestItem::OnOrderedQuest(const FName& InQuestId) {
}

void APalLevelObjectQuestItem::OnCompleteSyncPlayer(APalPlayerState* PlayerState) {
}

void APalLevelObjectQuestItem::OnCompletedQuest(const FName& InQuestId) {
}




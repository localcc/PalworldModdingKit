#include "PalFunnelSkillModuleCollectItem.h"

UPalFunnelSkillModuleCollectItem::UPalFunnelSkillModuleCollectItem() {
    this->bUseParallelSearch = false;
    this->SearchInterval = 0.10f;
    this->bShouldSetSkillAction = false;
    this->SearchIntervalElapsed = 0.00f;
    this->bObservePendingPathRequest = false;
    this->ObserveNextRequestTime = 0.00f;
    this->ObserveRequestNonce = 0;
}

void UPalFunnelSkillModuleCollectItem::SearchCollectableItem(float DeltaTime) {
}

void UPalFunnelSkillModuleCollectItem::Reset() {
}

bool UPalFunnelSkillModuleCollectItem::Pickup() {
    return false;
}

void UPalFunnelSkillModuleCollectItem::ObserveCollectItem(float DeltaTime) {
}

bool UPalFunnelSkillModuleCollectItem::IsNearTargetLocation(FVector Location) const {
    return false;
}

APalMapObject* UPalFunnelSkillModuleCollectItem::GetTargetObject() const {
    return NULL;
}

bool UPalFunnelSkillModuleCollectItem::GetTargetLocation(FVector& Location) const {
    return false;
}

FGuid UPalFunnelSkillModuleCollectItem::GetTargetId() const {
    return FGuid{};
}



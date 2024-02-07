#include "PalFunnelSkillModuleCollectItem.h"

UPalFunnelSkillModuleCollectItem::UPalFunnelSkillModuleCollectItem() {
    this->bShouldSetSkillAction = false;
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



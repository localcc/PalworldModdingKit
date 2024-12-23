#include "PalUISkillFruitFarm.h"

UPalUISkillFruitFarm::UPalUISkillFruitFarm() {
}

void UPalUISkillFruitFarm::SetCanTransport(bool bCanTransport) {
}

bool UPalUISkillFruitFarm::MoveToSkillFruitSlot(UPalItemSlot* fromSlot) {
    return false;
}

UPalItemSlot* UPalUISkillFruitFarm::GetTargetSkillFruitSlot() const {
    return NULL;
}

TArray<UPalItemSlot*> UPalUISkillFruitFarm::GetProductSlots() const {
    return TArray<UPalItemSlot*>();
}

UPalMapObjectFarmSkillFruitsModel* UPalUISkillFruitFarm::GetModel() const {
    return NULL;
}

UPalItemContainer* UPalUISkillFruitFarm::GetFarmItemContainer() const {
    return NULL;
}

void UPalUISkillFruitFarm::GetAllProduct() {
}

bool UPalUISkillFruitFarm::CanTransport() const {
    return false;
}



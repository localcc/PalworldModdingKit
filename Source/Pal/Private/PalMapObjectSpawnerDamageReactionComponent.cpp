#include "PalMapObjectSpawnerDamageReactionComponent.h"

UPalMapObjectSpawnerDamageReactionComponent::UPalMapObjectSpawnerDamageReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDropItemOnDamaged = false;
    this->EffectSlot = NULL;
}



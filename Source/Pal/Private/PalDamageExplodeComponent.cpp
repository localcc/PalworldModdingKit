#include "PalDamageExplodeComponent.h"



void UPalDamageExplodeComponent::ForceExplode(AActor* Attacker) {
}

UPalDamageExplodeComponent::UPalDamageExplodeComponent() {
    this->ExplosionDelayTime = 0.00f;
    this->IsExploded = false;
}


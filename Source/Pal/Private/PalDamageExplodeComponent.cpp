#include "PalDamageExplodeComponent.h"

UPalDamageExplodeComponent::UPalDamageExplodeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionDelayTime = 0.00f;
    this->IsExploded = false;
}



void UPalDamageExplodeComponent::ForceExplode(AActor* Attacker) {
}



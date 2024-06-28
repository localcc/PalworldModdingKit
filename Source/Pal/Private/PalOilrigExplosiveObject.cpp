#include "PalOilrigExplosiveObject.h"
#include "Net/UnrealNetwork.h"

APalOilrigExplosiveObject::APalOilrigExplosiveObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelfOilrigType = EPalOilrigType::Debug;
    this->IsExplodedFlag = false;
}

void APalOilrigExplosiveObject::SyncDestroyObject_ToAll_Implementation() {
}

void APalOilrigExplosiveObject::OnRep_IsExplodedFlag() {
}

void APalOilrigExplosiveObject::OnEexplosion(FPalDamageInfo DamageInfo) {
}

void APalOilrigExplosiveObject::ChangeDestroyedVisual_ToAll_Implementation() {
}



void APalOilrigExplosiveObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalOilrigExplosiveObject, IsExplodedFlag);
}



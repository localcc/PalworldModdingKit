#include "PalFoliageISMComponentBase.h"

UPalFoliageISMComponentBase::UPalFoliageISMComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalFoliageISMComponentBase::SpawnInstance(UPalFoliageInstance* Instance) {
}

void UPalFoliageISMComponentBase::OnRemoveInstance(const FName FoliageTypeId, UPalFoliageInstance* Instance) {
}

void UPalFoliageISMComponentBase::OnRegisterInstance(const FName FoliageTypeId, UPalFoliageInstance* Instance) {
}

void UPalFoliageISMComponentBase::OnReceiveDamageInClient(const FPalDamageInfo& DamageInfo) {
}

void UPalFoliageISMComponentBase::OnDisposeModel(UPalMapObjectFoliageModel* Model) {
}

void UPalFoliageISMComponentBase::DespawnInstance(UPalFoliageInstance* Instance) {
}



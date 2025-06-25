#include "PalActivatableDamageAreaBase.h"

APalActivatableDamageAreaBase::APalActivatableDamageAreaBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->HitFilter = NULL;
    this->DamageValue = 0.00f;
    this->State = EPalActivatableDamageAreaState::Inactive;
    this->ActivatedCount = 0;
    this->ActivateLoopNum = 0;
}

void APalActivatableDamageAreaBase::StartInactivateAnimation_Implementation() {
}

void APalActivatableDamageAreaBase::StartActivateAnimation_Implementation() {
}


void APalActivatableDamageAreaBase::OnHitDamageVolume(UPrimitiveComponent* MyHitComponent, AActor* OtherHitActor, UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount) {
}


void APalActivatableDamageAreaBase::BroadcastInactivate_Multicast_Implementation() {
}

void APalActivatableDamageAreaBase::BroadcastActivate_Multicast_Implementation() {
}



#include "PalOilRigCannonBase.h"
#include "Net/UnrealNetwork.h"

APalOilRigCannonBase::APalOilRigCannonBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RangeMin = 100.00f;
    this->RangeMax = 10000.00f;
    this->PitchMin = -45.00f;
    this->PitchMax = 45.00f;
    this->YawMax = -1.00f;
    this->PitchSpeed = 10.00f;
    this->YawSpeed = 10.00f;
    this->ChangeTargetInterval = 2.00f;
    this->BulletSpeed = 50000.00f;
    this->LongPressTime = 3.00f;
    this->OnlyFlyTarget = false;
    this->AimTargetActor = NULL;
    this->ChangeTargetTimer = 0.00f;
    this->CurrentYaw = 0.00f;
    this->IsShooting = false;
    this->IsInConeAimTarget = false;
    this->IsDisableInteractive = false;
    this->IsDestroyed = false;
    this->SelfOilrigType = EPalOilrigType::Debug;
}

void APalOilRigCannonBase::SyncDestroyObject_ToAll_Implementation() {
}

void APalOilRigCannonBase::RequestDestroyWeapon() {
}

void APalOilRigCannonBase::RemoveOverlapCharacter(AActor* Actor) {
}

void APalOilRigCannonBase::ReleaseTrigger_ToAll_Implementation() {
}


void APalOilRigCannonBase::PullTrigger_ToAll_Implementation() {
}


void APalOilRigCannonBase::OnRep_DestroyedFlag() {
}


void APalOilRigCannonBase::OnDestroyedWeapon() {
}

bool APalOilRigCannonBase::IsShootingGun() {
    return false;
}

bool APalOilRigCannonBase::IsDestroyedWeapon() const {
    return false;
}




APalOilrigController* APalOilRigCannonBase::FindOilrigController() {
    return NULL;
}

void APalOilRigCannonBase::DestroyWeapon_ToAll_Implementation() {
}


bool APalOilRigCannonBase::CanRayCastToTarget() {
    return false;
}

void APalOilRigCannonBase::AddOverlapCharacter(AActor* Actor) {
}

void APalOilRigCannonBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalOilRigCannonBase, AimTargetActor);
    DOREPLIFETIME(APalOilRigCannonBase, IsDestroyed);
}



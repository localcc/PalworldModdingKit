#include "PalAntiAirMissileLauncher.h"
#include "Net/UnrealNetwork.h"

APalAntiAirMissileLauncher::APalAntiAirMissileLauncher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->TargetSerchRadius = 10000.00f;
    this->AttackableInRangeTime = 3.00f;
    this->TargetChangeIntervalTime = 5.00f;
    this->ReloadTime = 5.00f;
    this->PitchSpeed = 10.00f;
    this->YawSpeed = 10.00f;
    this->PitchMin = -45.00f;
    this->PitchMax = 45.00f;
    this->LongPressTime = 3.00f;
    this->AimTarget = NULL;
    this->TargetChangeTimer = 3.00f;
    this->IsShooting = false;
    this->ReloadingTimer = 0.00f;
    this->IsReloading = false;
    this->IsDisableInteractive = false;
    this->IsDestroyed = false;
}

void APalAntiAirMissileLauncher::StartReload() {
}

void APalAntiAirMissileLauncher::RemoveInRangeActor(AActor* Actor) {
}

void APalAntiAirMissileLauncher::ReleaseTrigger_ByBP() {
}


void APalAntiAirMissileLauncher::ReleaseTrigger_Implementation() {
}


void APalAntiAirMissileLauncher::PullTrigger_Implementation() {
}

void APalAntiAirMissileLauncher::OnRep_DestroyedFlag() {
}


void APalAntiAirMissileLauncher::OnDeadByDamage() {
}

bool APalAntiAirMissileLauncher::IsDestroyedWeapon() const {
    return false;
}




AActor* APalAntiAirMissileLauncher::GetAimTarget() const {
    return NULL;
}

void APalAntiAirMissileLauncher::DestroyByPlayerCon_ToAll_Implementation() {
}

void APalAntiAirMissileLauncher::AddInRangeActor(AActor* Actor) {
}

void APalAntiAirMissileLauncher::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalAntiAirMissileLauncher, AimTarget);
    DOREPLIFETIME(APalAntiAirMissileLauncher, IsDestroyed);
}



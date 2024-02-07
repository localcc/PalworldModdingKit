#include "PalAICombatModule.h"

UPalAICombatModule::UPalAICombatModule() {
}

void UPalAICombatModule::UpdateBattleState() {
}

void UPalAICombatModule::Setup() {
}

void UPalAICombatModule::OnBattleFinish() {
}

bool UPalAICombatModule::IsReachable_NavMesh_ForActor(AActor* Target) {
    return false;
}

bool UPalAICombatModule::IsReachable_NavMesh(FVector TargetPos) {
    return false;
}

bool UPalAICombatModule::IsBattleMode() {
    return false;
}

AActor* UPalAICombatModule::GetTargetActor() {
    return NULL;
}

bool UPalAICombatModule::AIMoveToTargetActor(AActor* Target) {
    return false;
}



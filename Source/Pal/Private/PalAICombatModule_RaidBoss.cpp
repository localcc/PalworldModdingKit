#include "PalAICombatModule_RaidBoss.h"

UPalAICombatModule_RaidBoss::UPalAICombatModule_RaidBoss() {
    this->TargetBaseCampActor = NULL;
    this->bIsRaidBossArena = false;
}

void UPalAICombatModule_RaidBoss::Setup_ForBP(FGuid CampID) {
}

void UPalAICombatModule_RaidBoss::OnBattleFinish_forDelegate(AActor* Actor) {
}

bool UPalAICombatModule_RaidBoss::JudgeReturnCombatStartPosition() {
    return false;
}

bool UPalAICombatModule_RaidBoss::IsRaidBossArena() const {
    return false;
}

AActor* UPalAICombatModule_RaidBoss::GetBaseCampActor() {
    return NULL;
}

AActor* UPalAICombatModule_RaidBoss::FindPlayerTarget() {
    return NULL;
}

AActor* UPalAICombatModule_RaidBoss::FindNearTarget() {
    return NULL;
}



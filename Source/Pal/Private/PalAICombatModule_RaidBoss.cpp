#include "PalAICombatModule_RaidBoss.h"

UPalAICombatModule_RaidBoss::UPalAICombatModule_RaidBoss() {
    this->TargetBaseCampActor = NULL;
}

void UPalAICombatModule_RaidBoss::Setup_ForBP(FGuid CampID) {
}

void UPalAICombatModule_RaidBoss::OnBattleFinish_forDelegate(AActor* Actor) {
}

bool UPalAICombatModule_RaidBoss::JudgeReturnCombatStartPosition() {
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



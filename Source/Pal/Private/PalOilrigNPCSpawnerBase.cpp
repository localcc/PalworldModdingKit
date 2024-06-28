#include "PalOilrigNPCSpawnerBase.h"

APalOilrigNPCSpawnerBase::APalOilrigNPCSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelfOilrigType = EPalOilrigType::Debug;
    this->Squad = NULL;
}


void APalOilrigNPCSpawnerBase::OnChangeOneNPCCombatMode(APalCharacter* Character, bool IsCombat) {
}

void APalOilrigNPCSpawnerBase::NotifyWipedOut() {
}

bool APalOilrigNPCSpawnerBase::IsWipedOut() {
    return false;
}

void APalOilrigNPCSpawnerBase::AddCharacterToGroup(UPalIndividualCharacterHandle* Handle) {
}



#include "PalAIActionBaseCampDefenseBase.h"

APalAIController* UPalAIActionBaseCampDefenseBase::GetControllerRef() {
    return NULL;
}

UPalAIActionBaseCampDefenseBase::UPalAIActionBaseCampDefenseBase() {
    this->TargetActor = NULL;
    this->SelfActor = NULL;
    this->CombatModule = NULL;
    this->CurrentWorkType = EPalWorkType::None;
    this->DefenseCombatType = EPalWorkDefenseCombatType::None;
    this->DefenseActionClass = NULL;
    this->DefenseWaitActionClass = NULL;
}


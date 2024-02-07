#include "PalAIActionBaseCampDefenseBase.h"

UPalAIActionBaseCampDefenseBase::UPalAIActionBaseCampDefenseBase() {
    this->DefaultPriority = EAIRequestPriority::Logic;
    this->TargetActor = NULL;
    this->SelfActor = NULL;
    this->CombatModule = NULL;
    this->CurrentWorkType = EPalWorkType::None;
    this->DefenseCombatType = EPalWorkDefenseCombatType::None;
    this->DefenseActionClass = NULL;
    this->DefenseWaitActionClass = NULL;
}

APalAIController* UPalAIActionBaseCampDefenseBase::GetControllerRef() {
    return NULL;
}



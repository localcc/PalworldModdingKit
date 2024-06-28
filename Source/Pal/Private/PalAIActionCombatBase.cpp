#include "PalAIActionCombatBase.h"

UPalAIActionCombatBase::UPalAIActionCombatBase() {
    this->DefaultPriority = EAIRequestPriority::Logic;
    this->TargetActor = NULL;
    this->SelfActor = NULL;
    this->CombatModule = NULL;
    this->NextIsWaza = false;
    this->NextWazaSlotIndex = 0;
    this->NextActionClass = NULL;
    this->InterruptSkillSlotID = -1;
    this->bInterruptSkill = false;
    this->bInterruptSkillWaiting = false;
}

void UPalAIActionCombatBase::StartNextAction_Event(const UPalActionComponent* ActionComponent) {
}

void UPalAIActionCombatBase::SkillSlotSetUp() {
}

void UPalAIActionCombatBase::SetTargetAndNextAction(AActor* Target) {
}

bool UPalAIActionCombatBase::PreTickFinishCheck() {
    return false;
}

void UPalAIActionCombatBase::PlayActionWhenDarknessStatus() {
}

void UPalAIActionCombatBase::OnDeadDeledate_Event(FPalDeadInfo DeadInfo) {
}

void UPalAIActionCombatBase::MoveToTarget() {
}

bool UPalAIActionCombatBase::LineTraceTarget() {
    return false;
}

void UPalAIActionCombatBase::InterruptAction(int32 SkillSlotID) {
}

UPalStaticCharacterParameterComponent* UPalAIActionCombatBase::GetStaticParamCompRef() {
    return NULL;
}

UPalActiveSkillSlot* UPalAIActionCombatBase::GetSkillSlotRef() {
    return NULL;
}

UPalCharacterParameterComponent* UPalAIActionCombatBase::GetParamCompRef() {
    return NULL;
}

APalAIController* UPalAIActionCombatBase::GetControllerRef() {
    return NULL;
}

UPalActionComponent* UPalAIActionCombatBase::GetActorActionComponentRef() {
    return NULL;
}

void UPalAIActionCombatBase::ChangeNextAction() {
}



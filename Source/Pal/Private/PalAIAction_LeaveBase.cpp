#include "PalAIAction_LeaveBase.h"

void UPalAIAction_LeaveBase::InitializeObject(AActor* CombatTarget, APalCharacter* SelfCharactor) {
}

UPalAIAction_LeaveBase::UPalAIAction_LeaveBase() {
    this->TargetActor = NULL;
    this->SelfActor = NULL;
    this->Movement = NULL;
}


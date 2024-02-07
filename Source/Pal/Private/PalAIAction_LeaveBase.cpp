#include "PalAIAction_LeaveBase.h"

UPalAIAction_LeaveBase::UPalAIAction_LeaveBase() {
    this->TargetActor = NULL;
    this->SelfActor = NULL;
    this->Movement = NULL;
}

void UPalAIAction_LeaveBase::InitializeObject(AActor* CombatTarget, APalCharacter* SelfCharactor) {
}



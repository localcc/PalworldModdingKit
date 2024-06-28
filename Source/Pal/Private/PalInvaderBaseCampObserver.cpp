#include "PalInvaderBaseCampObserver.h"

UPalInvaderBaseCampObserver::UPalInvaderBaseCampObserver() {
    this->TargetBaseCamp = NULL;
    this->bIsInvading = false;
    this->bIsCoolTime = false;
    this->CoolTimeFinish = 0.00f;
    this->CoolTimeElapsed = 0.00f;
    this->PlayerInBaseCampTimer = 0.00f;
}

void UPalInvaderBaseCampObserver::OnExitCharacter(UPalIndividualCharacterHandle* Handle) {
}

void UPalInvaderBaseCampObserver::OnEnterCharacter(UPalIndividualCharacterHandle* Handle) {
}



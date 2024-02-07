#include "PalInvaderIncidentBase.h"

UPalInvaderIncidentBase::UPalInvaderIncidentBase() {
    this->InvaderType = EPalInvaderType::None;
    this->InvaderDataTable = NULL;
    this->MonsterAIControllerClass = NULL;
    this->EnemyAIControllerClass = NULL;
    this->bCanExecute = false;
    this->Squad = NULL;
}

void UPalInvaderIncidentBase::StartInvader() {
}


bool UPalInvaderIncidentBase::SelectInvaders(int32 Grade, EPalBiomeType Biome, TArray<FPalInvaderSpawnCharacterParameter>& OutInvaderMember) {
    return false;
}

void UPalInvaderIncidentBase::RemoveGroupCharacter(UPalIndividualCharacterHandle* RemoveIndividualHandle) {
}

void UPalInvaderIncidentBase::OnStartInvade_Implementation() {
}

void UPalInvaderIncidentBase::OnInvaderArrived_Implementation() {
}

void UPalInvaderIncidentBase::OnEndInvade_Implementation() {
}

bool UPalInvaderIncidentBase::IsGroupCharacter(UPalIndividualCharacterHandle* IndividualHandle) const {
    return false;
}

int32 UPalInvaderIncidentBase::GetVisitorNPCReturnTimeMinutes() const {
    return 0;
}

UPalBaseCampModel* UPalInvaderIncidentBase::GetTargetCampModel() const {
    return NULL;
}


int32 UPalInvaderIncidentBase::GetInvadeReturnTimeMinutes() const {
    return 0;
}

void UPalInvaderIncidentBase::GetChosenInvaderGroupName(FText& OutText) const {
}

int32 UPalInvaderIncidentBase::GetCandidateStartLocations(TArray<FVector>& Result) {
    return 0;
}

void UPalInvaderIncidentBase::GetBroadcastParameter(FPalIncidentBroadcastParameter& outParameter) {
}

int32 UPalInvaderIncidentBase::GetAliveInvaderNum() const {
    return 0;
}


void UPalInvaderIncidentBase::AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle, EPalCharacterLocationType LocationType) {
}



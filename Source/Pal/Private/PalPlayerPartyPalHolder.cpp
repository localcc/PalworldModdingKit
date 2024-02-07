#include "PalPlayerPartyPalHolder.h"
#include "Templates/SubclassOf.h"

UPalPlayerPartyPalHolder::UPalPlayerPartyPalHolder() {
    this->FirstOtomoPal = NULL;
    this->SecondOtomoPal = NULL;
    this->FirstCoolTimer = 999.00f;
    this->SecondCoolTimer = 999.00f;
    this->CoolDownTime = 0.00f;
}

void UPalPlayerPartyPalHolder::UpdateCoolTimer(float DeltaTime) {
}

void UPalPlayerPartyPalHolder::Test_SetClassArray(TArray<TSubclassOf<APalCharacter>> MonsterClassArray) {
}

void UPalPlayerPartyPalHolder::SetUpPartyHolder(float CoolDownTime_Second) {
}

void UPalPlayerPartyPalHolder::RestartCoolTime(bool SecondPal) {
}

bool UPalPlayerPartyPalHolder::PawnOtmoIsPartyOtomo(bool SecondPal, UPalIndividualCharacterHandle* IDHandle) {
    return false;
}

bool UPalPlayerPartyPalHolder::IsUsableCommandSkill(bool SecondPal) {
    return false;
}

void UPalPlayerPartyPalHolder::GetPartyMember(TArray<UPalIndividualCharacterHandle*>& OutPartyMember) {
}

UPalIndividualCharacterHandle* UPalPlayerPartyPalHolder::GetOtomoPal(bool SecondPal) {
    return NULL;
}

float UPalPlayerPartyPalHolder::GetCoolTimeRate(bool SecondPal) {
    return 0.0f;
}

void UPalPlayerPartyPalHolder::ChangePalSlot(bool SecondPal) {
}



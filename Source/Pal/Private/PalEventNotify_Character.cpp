#include "PalEventNotify_Character.h"

UPalEventNotify_Character::UPalEventNotify_Character() {
}

void UPalEventNotify_Character::OnCharacterSpawned_ServerInternal(UPalIndividualCharacterHandle* CharacterHandle) {
}

void UPalEventNotify_Character::OnCharacterDead_ServerInternal(FPalDeadInfo DeadInfo) {
}

void UPalEventNotify_Character::OnCharacterDamaged_ServerInternal(FPalDamageResult DamageResult) {
}

UPalEventNotify_Character* UPalEventNotify_Character::GetEventNotify_Character(const UObject* WorldContextObject) {
    return NULL;
}



#include "PalActiveSkillSlot.h"

UPalActiveSkillSlot::UPalActiveSkillSlot() {
    this->SelfActor = NULL;
    this->IsEndInit = false;
}

void UPalActiveSkillSlot::UpdateCoolTime(float DeltaTime) {
}

void UPalActiveSkillSlot::StopCoolTime(int32 SlotID) {
}

void UPalActiveSkillSlot::SetTransient(int32 SlotID, bool NewIsTransient) {
}

void UPalActiveSkillSlot::SetSkill(int32 SlotID, EPalWazaID WazaType) {
}

void UPalActiveSkillSlot::SetCoolTimeRate(FName Key, float Rate) {
}

void UPalActiveSkillSlot::RestartCoolTime(int32 SlotID) {
}

void UPalActiveSkillSlot::RemoveSkill(int32 SlotID) {
}

void UPalActiveSkillSlot::OnChangeEquipWaza(UPalIndividualCharacterParameter* IndividualParameter) {
}

bool UPalActiveSkillSlot::IsValidSkill(int32 SlotID) const {
    return false;
}

bool UPalActiveSkillSlot::IsTransient(int32 SlotID) const {
    return false;
}

bool UPalActiveSkillSlot::IsNearMaxRange(int32 SlotID, AActor* TargetActor) const {
    return false;
}

bool UPalActiveSkillSlot::IsFarMinRange(int32 SlotID, AActor* TargetActor) const {
    return false;
}

bool UPalActiveSkillSlot::IsCoolTimeFinish(int32 SlotID) const {
    return false;
}

void UPalActiveSkillSlot::InitObject(AActor* ActorSelf) {
}

EPalWazaID UPalActiveSkillSlot::GetWazaType(int32 SlotID) const {
    return EPalWazaID::None;
}

TMap<int32, UPalActiveSkill*> UPalActiveSkillSlot::GetSkillMap() const {
    return TMap<int32, UPalActiveSkill*>();
}

TArray<int32> UPalActiveSkillSlot::GetEnableSlotIDs() const {
    return TArray<int32>();
}

float UPalActiveSkillSlot::GetCoolTimeRate(int32 SlotID) const {
    return 0.0f;
}

float UPalActiveSkillSlot::GetCoolTime(int32 SlotID) const {
    return 0.0f;
}

int32 UPalActiveSkillSlot::FindMostEffectiveSlotID(AActor* TargetActor) const {
    return 0;
}

int32 UPalActiveSkillSlot::ChoiceEnableSlotIDByRandom() const {
    return 0;
}

bool UPalActiveSkillSlot::CanUse(int32 SlotID, AActor* TargetActor) const {
    return false;
}



#include "PalUIPalCharacterRankUpModel.h"

UPalUIPalCharacterRankUpModel::UPalUIPalCharacterRankUpModel() {
    this->PalStorageModelClass = NULL;
    this->PalStorageModel = NULL;
    this->SelectMode = EPalUIPalCharacterRankUpSelectMode::SelectReferenceSlot;
}

bool UPalUIPalCharacterRankUpModel::ToggleResourceCharacter(UPalIndividualCharacterHandle* Handle) {
    return false;
}

void UPalUIPalCharacterRankUpModel::Setup(UPalHUDDispatchParameter_CharacterRankUp* Parameter) {
}

void UPalUIPalCharacterRankUpModel::SelectTargetCharacter(UPalIndividualCharacterHandle* Handle) {
}

void UPalUIPalCharacterRankUpModel::SelectResourcesAuto(const EPalUIPalCharacterRankUpSelectResourceType SelectType) {
}

bool UPalUIPalCharacterRankUpModel::SelectResourceCharacterTo(UPalIndividualCharacterHandle* Handle, const int32 ToResourceSlotIndex) {
    return false;
}

void UPalUIPalCharacterRankUpModel::OnUpdateTargetSlot(UPalIndividualCharacterReferenceSlot* Slot, FPalInstanceID LastIndividualId) {
}

void UPalUIPalCharacterRankUpModel::OnUpdateTargetCharacterRank(const int32 nowRank, const int32 oldRank) {
}

void UPalUIPalCharacterRankUpModel::OnUpdateResourceSlot(UPalIndividualCharacterReferenceSlot* Slot, FPalInstanceID LastIndividualId) {
}

void UPalUIPalCharacterRankUpModel::OnClickTargetCharacterSlot() {
}

void UPalUIPalCharacterRankUpModel::OnClickResourceCharacterSlot(const int32 SlotIndex) {
}

bool UPalUIPalCharacterRankUpModel::IsSelectableSlotInternal(const UPalIndividualCharacterSlot* Slot) const {
    return false;
}

void UPalUIPalCharacterRankUpModel::InvokeRankUp() {
}

UPalIndividualCharacterReferenceSlot* UPalUIPalCharacterRankUpModel::GetTargetSlot() const {
    return NULL;
}

UPalIndividualCharacterReferenceSlot* UPalUIPalCharacterRankUpModel::GetSlot(const int32 SlotIndex) const {
    return NULL;
}

void UPalUIPalCharacterRankUpModel::GetResourceSlots(TArray<UPalIndividualCharacterSlot*>& Slots) const {
}

void UPalUIPalCharacterRankUpModel::Dispose() {
}

UPalIndividualCharacterParameter* UPalUIPalCharacterRankUpModel::CreatePredicateTargetCharacterParameter() {
    return NULL;
}

void UPalUIPalCharacterRankUpModel::ClearSelected() {
}

void UPalUIPalCharacterRankUpModel::ClearResourceCharacters() {
}

EPalUIPalCharacterRankUpRequestResult UPalUIPalCharacterRankUpModel::CanInvokeRankUp() const {
    return EPalUIPalCharacterRankUpRequestResult::Success;
}



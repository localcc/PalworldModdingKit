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

void UPalUIPalCharacterRankUpModel::OnUpdateTargetCharacterRank(const int32 NowRank, const int32 OldRank) {
}

void UPalUIPalCharacterRankUpModel::OnUpdateResourceSlot(UPalIndividualCharacterReferenceSlot* Slot, FPalInstanceID LastIndividualId) {
}

bool UPalUIPalCharacterRankUpModel::IsSelectableSlotInternal(const UPalIndividualCharacterSlot* Slot) const {
    return false;
}

bool UPalUIPalCharacterRankUpModel::IsOverflowResourcesForTarget() const {
    return false;
}

bool UPalUIPalCharacterRankUpModel::IsFilledResourcesForTarget() const {
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

int32 UPalUIPalCharacterRankUpModel::GetCurrentResourceCount() const {
    return 0;
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

void UPalUIPalCharacterRankUpModel::CalcRankByCurrentSelectForUI(int32& OutToRank, int32& OutToRankUpExp, int32& OutTotalRankUpExp) const {
}



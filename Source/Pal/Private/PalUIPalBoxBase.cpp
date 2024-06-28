#include "PalUIPalBoxBase.h"

UPalUIPalBoxBase::UPalUIPalBoxBase() {
}

void UPalUIPalBoxBase::TryMoveToOtomo(UPalIndividualCharacterSlot* MoveSlot) {
}

void UPalUIPalBoxBase::TryMoveToBox(UPalIndividualCharacterSlot* MoveSlot) {
}

void UPalUIPalBoxBase::TryMoveToBaseCamp(UPalIndividualCharacterSlot* MoveSlot) {
}

void UPalUIPalBoxBase::TryLoosePal(UPalIndividualCharacterSlot* TargetSlot) {
}

void UPalUIPalBoxBase::SetPagePalBoxList(int32 newPage) {
}

void UPalUIPalBoxBase::SetBaseCampId(const FGuid& BaseCampId) {
}

void UPalUIPalBoxBase::SelectCharacterSlot(UPalIndividualCharacterSlot* TargetSlot, const EPalItemSlotPressType PressType) {
}

void UPalUIPalBoxBase::RequestSortBox(const FPalCharacterContainerSortInfo& SortInfo) {
}

void UPalUIPalBoxBase::OnUpdateWorkerCapacity(UPalIndividualCharacterContainer* Container) {
}



int32 UPalUIPalBoxBase::GetBoxMaxPageNum() {
    return 0;
}

void UPalUIPalBoxBase::ChangePrevPagePalBoxList() {
}

void UPalUIPalBoxBase::ChangeNextPagePalBoxList() {
}

void UPalUIPalBoxBase::CancelLift() {
}



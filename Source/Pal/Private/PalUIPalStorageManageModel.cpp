#include "PalUIPalStorageManageModel.h"
#include "PalUIPalStorageManageRightModel.h"
#include "PalUIPalStorageModel.h"

void UPalUIPalStorageManageModel::MoveSlotToWorker(UPalIndividualCharacterSlot* Slot) {
}

void UPalUIPalStorageManageModel::MoveSlotToPosses(UPalIndividualCharacterSlot* Slot) {
}

void UPalUIPalStorageManageModel::MoveSlotToParty(UPalIndividualCharacterSlot* Slot) {
}

void UPalUIPalStorageManageModel::MoveSlotToLost(UPalIndividualCharacterSlot* Slot) {
}

void UPalUIPalStorageManageModel::Initialize(const FGuid& InOwnerBaseCampId) {
}

UPalUIPalStorageManageModel::UPalUIPalStorageManageModel() {
    this->PalStorageClass = UPalUIPalStorageModel::StaticClass();
    this->PalStorage = NULL;
    this->PalStorageManageRightClass = UPalUIPalStorageManageRightModel::StaticClass();
    this->PalStorageManageRight = NULL;
}


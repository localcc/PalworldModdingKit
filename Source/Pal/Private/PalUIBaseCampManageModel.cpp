#include "PalUIBaseCampManageModel.h"
#include "PalUIBaseCampPartyModel.h"
#include "PalUIBaseCampWaitersModel.h"
#include "PalUIBaseCampWorkersModel.h"
#include "PalUIPalBoxModel.h"

UPalUIBaseCampManageModel::UPalUIBaseCampManageModel() {
    this->PalBoxClass = UPalUIPalBoxModel::StaticClass();
    this->PalBox = NULL;
    this->BaseCampWorkersClass = UPalUIBaseCampWorkersModel::StaticClass();
    this->BaseCampWorkers = NULL;
    this->BaseCampWaitersClass = UPalUIBaseCampWaitersModel::StaticClass();
    this->BaseCampWaiters = NULL;
    this->BaseCampPartyClass = UPalUIBaseCampPartyModel::StaticClass();
    this->BaseCampParty = NULL;
}

void UPalUIBaseCampManageModel::MoveWaiterToWorker(const int32 SlotIndex) {
}

void UPalUIBaseCampManageModel::MoveSlotToPosses(UPalIndividualCharacterSlot* Slot) {
}

void UPalUIBaseCampManageModel::MoveSlotToParty(UPalIndividualCharacterSlot* Slot) {
}

void UPalUIBaseCampManageModel::MoveSlotToLost(UPalIndividualCharacterSlot* Slot) {
}

void UPalUIBaseCampManageModel::Initialize(const FGuid& BaseCampId) {
}



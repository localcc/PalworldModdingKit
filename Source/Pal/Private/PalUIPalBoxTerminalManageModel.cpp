#include "PalUIPalBoxTerminalManageModel.h"
#include "PalUIBaseCampPartyModel.h"
#include "PalUIBaseCampWorkersModel.h"
#include "PalUIPalBoxModel.h"

UPalUIPalBoxTerminalManageModel::UPalUIPalBoxTerminalManageModel() {
    this->PalBoxClass = UPalUIPalBoxModel::StaticClass();
    this->PalBox = NULL;
    this->BaseCampWorkersClass = UPalUIBaseCampWorkersModel::StaticClass();
    this->BaseCampWorkers = NULL;
    this->BaseCampPartyClass = UPalUIBaseCampPartyModel::StaticClass();
    this->BaseCampParty = NULL;
}

void UPalUIPalBoxTerminalManageModel::MoveSlotToWorker(UPalIndividualCharacterSlot* Slot) {
}

void UPalUIPalBoxTerminalManageModel::MoveSlotToPosses(UPalIndividualCharacterSlot* Slot) {
}

void UPalUIPalBoxTerminalManageModel::MoveSlotToParty(UPalIndividualCharacterSlot* Slot) {
}

void UPalUIPalBoxTerminalManageModel::MoveSlotToLost(UPalIndividualCharacterSlot* Slot) {
}

void UPalUIPalBoxTerminalManageModel::Initialize(const FGuid& BaseCampId) {
}



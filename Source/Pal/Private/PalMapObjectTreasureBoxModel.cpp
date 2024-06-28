#include "PalMapObjectTreasureBoxModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectTreasureBoxModel::UPalMapObjectTreasureBoxModel() {
    this->TreasureGradeType = EPalMapObjectTreasureGradeType::Grade1;
    this->bOpened = false;
    this->LongHoldInteractDuration = 0.00f;
    this->InteractPlayerActionType = EPalActionType::None;
}

void UPalMapObjectTreasureBoxModel::RequestPicking_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectTreasureBoxModel::RequestOpen_ServerInternal(const int32 RequestPlayerId, bool IgnoreOpenItem) {
}

void UPalMapObjectTreasureBoxModel::ReceiveOpenSuccess_ClientInternal(const FPalNetArchive& Archive) {
}

void UPalMapObjectTreasureBoxModel::ReceiveOpenFailed_ClientInternal(const FPalNetArchive& Archive) {
}

void UPalMapObjectTreasureBoxModel::OpenPickingGame_ClientInternal() {
}

void UPalMapObjectTreasureBoxModel::OnEndPickingGame(bool IsSuccess) {
}

void UPalMapObjectTreasureBoxModel::NotifyPickingGameResult_ServerInternal(const int32 RequestPlayerId, bool IsSuccess) {
}

EPalMapObjectTreasureGradeType UPalMapObjectTreasureBoxModel::GetTreasureGradeType() const {
    return EPalMapObjectTreasureGradeType::Grade1;
}

void UPalMapObjectTreasureBoxModel::Debug_ReceiveObtainInfo_ClientInternal(const FPalNetArchive& Archive) {
}

TArray<FPalItemAndNum> UPalMapObjectTreasureBoxModel::CreateItemInfo() const {
    return TArray<FPalItemAndNum>();
}

void UPalMapObjectTreasureBoxModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectTreasureBoxModel, TreasureGradeType);
}



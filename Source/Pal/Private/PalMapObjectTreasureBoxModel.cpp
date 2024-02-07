#include "PalMapObjectTreasureBoxModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectTreasureBoxModel::UPalMapObjectTreasureBoxModel() {
    this->TreasureGradeType = EPalMapObjectTreasureGradeType::Grade1;
    this->bOpened = false;
}

void UPalMapObjectTreasureBoxModel::RequestOpen_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectTreasureBoxModel::ReceiveOpenSuccess_ClientInternal(const FPalNetArchive& Archive) {
}

void UPalMapObjectTreasureBoxModel::ReceiveOpenFailed_ClientInternal(const FPalNetArchive& Archive) {
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



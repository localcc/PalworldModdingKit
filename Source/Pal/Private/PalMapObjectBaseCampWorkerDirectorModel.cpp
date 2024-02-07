#include "PalMapObjectBaseCampWorkerDirectorModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectBaseCampWorkerDirectorModel::UPalMapObjectBaseCampWorkerDirectorModel() {
    this->BaseCampBattleTypeForClientRead = EPalBaseCampWorkerDirectionBattleType::FirstValue;
}

void UPalMapObjectBaseCampWorkerDirectorModel::RequestUpdateBaseCampBattleType_ServerInternal(const int32 RequestPlayerId, const int32 BattleTypeInt) {
}

void UPalMapObjectBaseCampWorkerDirectorModel::OnRep_BaseCampBattleTypeForClientRead() {
}

void UPalMapObjectBaseCampWorkerDirectorModel::NotifyChangeBaseCampBattleType_ClientInternal() {
}

void UPalMapObjectBaseCampWorkerDirectorModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectBaseCampWorkerDirectorModel, BaseCampBattleTypeForClientRead);
}



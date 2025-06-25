#include "PalMapObjectFishPondModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectFishPondModel::UPalMapObjectFishPondModel() {
    this->RequestedProductNum = 0;
    this->RemainProductNum = 0;
    this->bExistsCaughtCharacter = false;
    this->MenuUIClass = NULL;
    this->ObtainCharactersUIClass = NULL;
}

void UPalMapObjectFishPondModel::RequestStartProduct_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectFishPondModel::RequestObtainCharacters_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectFishPondModel::RequestCancelSelectedTarget_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectFishPondModel::OnRep_TargetLotteryName() {
}

void UPalMapObjectFishPondModel::OnRep_RequestedProductNum() {
}

void UPalMapObjectFishPondModel::OnRep_RemainProductNum() {
}

void UPalMapObjectFishPondModel::OnMultiHatchComplete(const TArray<FPalInstanceID>& HatchedIDs) {
}

void UPalMapObjectFishPondModel::OnFinishWorkInServer(UPalWorkBase* Work) {
}

void UPalMapObjectFishPondModel::NotifyFailedObtainCharacters_ClientInternal() {
}

void UPalMapObjectFishPondModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectFishPondModel, TargetLotteryName);
    DOREPLIFETIME(UPalMapObjectFishPondModel, RequestedProductNum);
    DOREPLIFETIME(UPalMapObjectFishPondModel, RemainProductNum);
    DOREPLIFETIME(UPalMapObjectFishPondModel, bExistsCaughtCharacter);
}



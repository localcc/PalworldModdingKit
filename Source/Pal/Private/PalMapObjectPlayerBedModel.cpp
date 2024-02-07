#include "PalMapObjectPlayerBedModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectPlayerBedModel::UPalMapObjectPlayerBedModel() {
    this->bHasAuthority = false;
    this->SleepingCharacter = NULL;
    this->SleepPlayerBedAction = NULL;
}

void UPalMapObjectPlayerBedModel::RequestTriggerSleepPlayerBed_ToServer(const int32 RequestPlayerId) {
}

void UPalMapObjectPlayerBedModel::RequestTriggerGetupPlayerBed_ToServer(const int32 RequestPlayerId) {
}

void UPalMapObjectPlayerBedModel::ReceiveTriggerSleepPlayerBedSuccess(const int32 RequestPlayerId) {
}

void UPalMapObjectPlayerBedModel::ReceiveTriggerGetupPlayerBedSuccess(const int32 RequestPlayerId) {
}


void UPalMapObjectPlayerBedModel::OnPlayerActionBegin(const UPalActionBase* ActionBase) {
}

void UPalMapObjectPlayerBedModel::OnGetupTrigger() {
}

void UPalMapObjectPlayerBedModel::OnEndSleep() {
}

void UPalMapObjectPlayerBedModel::OnDispose(UPalMapObjectModel* MapObjectModel, const FPalMapObjectDisposeOptions& Options) {
}

void UPalMapObjectPlayerBedModel::OnDamagePlayer(FPalDamageResult DamageResult) {
}


void UPalMapObjectPlayerBedModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectPlayerBedModel, SleepingCharacter);
}



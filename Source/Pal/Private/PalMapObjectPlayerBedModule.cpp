#include "PalMapObjectPlayerBedModule.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectPlayerBedModule::UPalMapObjectPlayerBedModule() {
    this->SleepingCharacter = NULL;
}

void UPalMapObjectPlayerBedModule::RequestTriggerSleepPlayerBed_ToServer(const int32 RequestPlayerId) {
}

void UPalMapObjectPlayerBedModule::RequestTriggerGetupPlayerBed_ToServer(const int32 TargetPlayerId) {
}

void UPalMapObjectPlayerBedModule::ReceiveTriggerSleepPlayerBedSuccess_ToClient() {
}

void UPalMapObjectPlayerBedModule::ReceiveTriggerGetupPlayerBedSuccess_ToClient() {
}

void UPalMapObjectPlayerBedModule::OnPlayerActionBegin(const UPalActionBase* ActionBase) {
}

void UPalMapObjectPlayerBedModule::OnGetupTrigger() {
}

void UPalMapObjectPlayerBedModule::OnEndSleep() {
}

void UPalMapObjectPlayerBedModule::OnDamagePlayer(FPalDamageResult DamageResult) {
}

void UPalMapObjectPlayerBedModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectPlayerBedModule, SleepingCharacter);
}



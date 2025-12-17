#include "PalInvaderManager.h"

UPalInvaderManager::UPalInvaderManager() {
}

void UPalInvaderManager::VisitorTravelTest() {
}

void UPalInvaderManager::VisitorTravelLog(EPalLogType logType) {
}

void UPalInvaderManager::StartInvaderMarchRandom() {
}

void UPalInvaderManager::StartInvaderMarchAll() {
}

AActor* UPalInvaderManager::SpawnDummyNavInvoker(const FTransform& Transform) {
    return NULL;
}


bool UPalInvaderManager::RequestIncidentVisitorNPC(const FGuid& Guid, UPalInvaderBaseCampObserver* Observer) {
    return false;
}


bool UPalInvaderManager::RequestIncidentInvaderEnemy(const FGuid& Guid, UPalInvaderBaseCampObserver* Observer) {
    return false;
}

void UPalInvaderManager::RemoveInvaderIncident(UPalIncidentBase* Incident) {
}

void UPalInvaderManager::BroadcastInvaderStart_Implementation(const FPalIncidentBroadcastParameter& Parameter) {
}

void UPalInvaderManager::BroadcastInvaderEnd_Implementation(const FPalIncidentBroadcastParameter& Parameter) {
}

void UPalInvaderManager::BroadcastInvaderArrived_Implementation(const FPalIncidentBroadcastParameter& Parameter) {
}



#include "PalIncidentSystem.h"

UPalIncidentSystem::UPalIncidentSystem() {
    this->IncidentParameterDataTable = NULL;
}

UPalIncidentList* UPalIncidentSystem::RequestIncidents(const TArray<FName>& Incidents, UObject* OccuredObject, UObject* OwnerObject, UPalIncidentDynamicParameter* Parameter) {
    return NULL;
}

UPalIncidentBase* UPalIncidentSystem::RequestIncident(FName IncidentId, UObject* OccuredObject, UObject* OwnerObject, UPalIncidentDynamicParameter* Parameter) {
    return NULL;
}

void UPalIncidentSystem::NotifyIncidentState(EPalIncidentState NotifyType, const FPalIncidentNotifyParameter& Parameter) {
}

bool UPalIncidentSystem::IsIncidentBeginAllowed(UPalIncidentBase* Incident) {
    return false;
}

UPalIncidentBase* UPalIncidentSystem::GenerateIncident(FPalIncidentInitializeParameter& InitializeParam) {
    return NULL;
}

void UPalIncidentSystem::ForceStopByOwner(UObject* OwnerObject) {
}

void UPalIncidentSystem::ForceStopByOccuredObject(UObject* OccuredObject) {
}

void UPalIncidentSystem::ForceStopByIncidentType(FName IncidentType) {
}

void UPalIncidentSystem::ForceStopByIncidentId(FName IncidentId) {
}


